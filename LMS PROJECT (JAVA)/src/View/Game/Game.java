package View.Game;

import java.awt.*;
import java.awt.image.BufferStrategy;

public class Game extends Canvas implements Runnable {

    public static final int     Height = 480;
    public static final int     Width  = 640;
    public static       int     frames = 0;
    public static       int     FPS    = 0;
    public static       boolean Won    = true;

    public enum State {Menu, Game, Help, GameOver, Difficulty, FastEnemy, AIEnemy, BossLevel, Won, Powering}

    public static State GameState = State.Powering;

    public enum Difficulty {Normal, Hard}

    public static        Difficulty GameDifficulty;
    private final        Handler    handler;
    private final        Spawn      spawned;
    private final        Menu       menu;
    private final        HUD        hud;
    private              Thread     thread;
    private              boolean    Running      = false;
    public               boolean    notPaused    = true;
    private static final Color[]    colors       = {Color.BLACK , Color.MAGENTA , Color.ORANGE , Color.yellow};
    public static        int        changeColors = ( int ) Calculations.random ( 0 , colors.length );

    public Game ( ) {
        AudioPlayer.LoadSound ( );
        hud     = new HUD ( );
        handler = new Handler ( );
        menu    = new Menu ( this );
        spawned = new Spawn ( handler , hud );
        this.addMouseListener ( menu );
        this.addKeyListener ( new KeyboardInput ( this ) );
        new Window ( Width , Height , "GAME" , this );
        AudioPlayer.getMusic ( "Menu Music" ).loop ( 1 , Calculations.volume );
    }

    public void GameSetup ( ) {
        Handler.addObject ( new Player ( ( float ) Width / 2 - 32 , ( float ) Height / 2 - 32 , ID.Player , handler ) );
        if ( GameDifficulty == Difficulty.Normal )
            Handler.addObject ( new Enemy ( Calculations.spawnEnemyX ( ) , Calculations.spawnEnemyY ( ) , ID.Enemy , 5 , 5 , Color.RED ) );
        else
            Handler.addObject ( new Enemy ( Calculations.spawnEnemyX ( ) , Calculations.spawnEnemyY ( ) , ID.Enemy , 8 , 8 , Color.RED ) );
    }

    public synchronized void start ( ) {
        thread = new Thread ( this );
        thread.start ( );
        Running = true;
    }

    public synchronized void stop ( ) {
        try {
            thread.join ( );
            Running = false;
        } catch (Exception e) {
            e.printStackTrace ( );
        }
    }

    public void run ( ) {
        this.requestFocus ( );
        double delta = 0;
        double amountOfTricks = 60.0;
        long lastTime = System.nanoTime ( );
        double ns = 1000000000 / amountOfTricks;
        long timer = System.currentTimeMillis ( );
        while (Running) {
            long now = System.nanoTime ( );
            delta += ( now - lastTime ) / ns;
            lastTime = now;
            while (delta >= 1) {
                tick ( );
                delta--;
            }
            if ( Running )
                render ( );
            frames++;
            if ( System.currentTimeMillis ( ) - timer > 1000 ) {
                timer += 1000;
                FPS    = frames;
                frames = 0;
            }
        }
        stop ( );
    }

    private void tick ( ) {
        if ( GameState == State.Game ) {
            if ( notPaused ) {
                handler.tick ( );
                spawned.tick ( );
                hud.tick ( );
            }
        }
        else {
            menu.tick ( );
            handler.tick ( );
        }
    }

    private void render ( ) {
        BufferStrategy bs = this.getBufferStrategy ( );
        if ( bs == null ) {
            this.createBufferStrategy ( 3 );
            return;
        }
        Graphics G = bs.getDrawGraphics ( );
        if ( GameState == State.Game ) {
            if ( notPaused ) {
                G.setColor ( colors[changeColors == colors.length - 1 ? changeColors = 0 : changeColors] );
                G.fillRect ( 0 , 0 , Width , Height );
                handler.render ( G );
                hud.render ( G );
            }
            else {
                G.setFont ( new Font ( "arial" , Font.BOLD | Font.ITALIC , 50 ) );
                G.setColor ( Color.BLUE );
                G.drawString ( "PAUSED" , 100 , 100 );
            }
        }
        else if ( GameState == State.AIEnemy || GameState == State.BossLevel || GameState == State.FastEnemy || GameState == State.Powering ) {
            menu.render ( G );
        }
        else {
            G.setColor ( Color.BLACK );
            G.fillRect ( 0 , 0 , Width , Height );
            handler.render ( G );
            menu.render ( G );
        }
        G.dispose ( );
        bs.show ( );
    }
}