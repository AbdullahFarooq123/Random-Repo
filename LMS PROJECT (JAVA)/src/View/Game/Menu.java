package View.Game;

import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class Menu extends MouseAdapter {
    public static  boolean GameOverParticle = true;
    private        boolean sizeIncrease     = true;
    public static  boolean GameMenuParticle = false;
    private        boolean changeState      = false;
    private        boolean constant         = false;
    private static int     size             = 0;
    public static  int     timer            = 100;
    private final  Game    game;
    private static int XDecrement = 0 ;
    private static int visible = 0;
    private static boolean stop = false;

    public Menu ( Game game ) {
        this.game    = game;
        DrawParticles ( );
    }

    public void mousePressed ( MouseEvent mouse ) {
        int MouseX = mouse.getX ( );
        int MouseY = mouse.getY ( );
        if ( Game.GameState == Game.State.Menu ) {
            if ( mouseClick ( MouseX , MouseY , 210 , 100 , 200 , 64 ) )
                Game.GameState = Game.State.Difficulty;
            else if ( mouseClick ( MouseX , MouseY , 210 , 200 , 200 , 64 ) )
                Game.GameState = Game.State.Help;
            else if ( mouseClick ( MouseX , MouseY , 210 , 300 , 200 , 64 ) )
                Window.Frame.dispose ();
        }
        else if ( Game.GameState == Game.State.Help ) {
            if ( mouseClick ( MouseX , MouseY , 200 , 310 , 200 , 64 ) )
                Game.GameState = Game.State.Menu;
        }
        else if ( Game.GameState == Game.State.Difficulty ) {
            if ( mouseClick ( MouseX , MouseY , 180 , 120 , 250 , 64 ) ) {
                AudioPlayer.Music.get ( "Menu Music" ).stop ( );
                AudioPlayer.Music.get ( "Game Music" ).loop ( 1,Calculations.volume );
                Calculations.ClearObjects ( );
                Game.GameDifficulty = Game.Difficulty.Normal;
                game.GameSetup ( );
                Game.GameState = Game.State.Game;
            }
            else if ( mouseClick ( MouseX , MouseY , 210 , 220 , 200 , 64 ) ) {
                AudioPlayer.Music.get ( "Menu Music" ).stop ( );
                AudioPlayer.Music.get ( "Game Music" ).loop (1,Calculations.volume );
                Calculations.ClearObjects ( );
                Game.GameDifficulty = Game.Difficulty.Hard;
                game.GameSetup ( );
                Game.GameState = Game.State.Game;
            }
            else if ( mouseClick ( MouseX , MouseY , 210 , 320 , 200 , 64 ) )
                Game.GameState = Game.State.Menu;
        }
        else if ( Game.GameState == Game.State.GameOver ) {
            Calculations.Reset ( );
            if ( mouseClick ( MouseX , MouseY , 210 , 330 , 200 , 64 ) ) {
                AudioPlayer.Sounds.get ( "OOH" ).stop ( );
                AudioPlayer.Music.get ( "Menu Music" ).loop (1,Calculations.volume );
                Game.GameState = Game.State.Difficulty;
            }
            else if ( mouseClick ( MouseX , MouseY , 210 , 250 , 200 , 64 ) ) {
                AudioPlayer.Sounds.get ( "OOH" ).stop ( );
                AudioPlayer.Music.get ( "Menu Music" ).loop ( 1,Calculations.volume);
                Game.GameState = Game.State.Menu;
            }

        }
        else if ( Game.GameState == Game.State.Won ) {
            if ( Game.Won ) {
                AudioPlayer.Music.get ( "Game Music" ).stop ( );
                if ( ! AudioPlayer.Music.get ( "Game Music" ).playing ( ) )
                    AudioPlayer.Music.get ( "Game Music" ).loop ( 1,Calculations.volume);
                Game.Won = false;
            }
            if ( mouseClick ( MouseX , MouseY , 210 , 330 , 200 , 64 ) ) {
                AudioPlayer.Music.get ( "Game Music" ).stop ( );
                AudioPlayer.Music.get ( "Menu Music" ).loop (1,Calculations.volume );
                Calculations.Reset ( );
                Game.GameState = Game.State.Difficulty;
            }
            if ( mouseClick ( MouseX , MouseY , 210 , 250 , 200 , 64 ) ) {
                AudioPlayer.Music.get ( "Game Music" ).stop ( );
                AudioPlayer.Music.get ( "Menu Music" ).loop ( 1,Calculations.volume);
                Game.GameState = Game.State.Menu;
            }

        }
    }

    public void mouseReleased ( MouseEvent mouse ) {
    }

    public boolean mouseClick ( int MouseX , int MouseY , int XCoordinate , int YCoordinate , int ClickWidth , int ClickHeight ) {
        if ( MouseX > XCoordinate && MouseX < XCoordinate + ClickWidth )
            return MouseY > YCoordinate && MouseY < YCoordinate + ClickHeight;
        else return false;
    }

    public void tick ( ) {
    }

    public void render ( Graphics G ) {
        Font font = new Font ( "arial" , Font.BOLD , 80 );
        G.setFont ( font );
        G.setColor ( Calculations.ColorChange ( ) );
        if ( Game.GameState == Game.State.Menu ) {
            if ( GameMenuParticle ) {
                DrawParticles ( );
                Calculations.Reset ( );
                GameMenuParticle = false;
            }
            GameOverParticle = true;
            G.drawString ( "MENU" , 190 , 70 );
            G.setColor ( Color.BLUE );
            font = new Font ( "arial" , Font.BOLD , 50 );
            G.setFont ( font );
            G.fillRect ( 210 , 100 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "PLAY" , 245 , 150 );
            G.setColor ( Color.BLUE );
            G.fillRect ( 210 , 200 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "HELP" , 245 , 250 );
            G.setColor ( Color.BLUE );
            G.fillRect ( 210 , 300 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "QUIT" , 248 , 350 );
        }
        if ( Game.GameState == Game.State.Help ) {
            G.drawString ( "HELP" , 200 , 70 );
            font = new Font ( "arial" , Font.BOLD | Font.ITALIC , 20 );
            G.setFont ( font );
            G.setColor ( Color.GREEN );
            G.fillRect ( 140 , 85 , 350 , 210 );
            G.setColor ( Color.BLACK );
            G.drawString ( "Use arrow keys to move your player." , 140 , 135 );
            G.drawString ( "Avoid enemies to survive." , 190 , 165 );
            G.drawString ( "Press \"Esc\" to Quit." , 230 , 195 );
            G.drawString ( "Press \"P\" to Pause." , 230 , 225 );
            G.drawString ( "Use \"+\" or \"-\" to change volume." , 160 , 255 );
            G.setColor ( Color.BLUE );
            G.fillRect ( 200 , 310 , 200 , 64 );
            font = new Font ( "arial" , Font.BOLD , 50 );
            G.setFont ( font );
            G.setColor ( Color.WHITE );
            G.drawString ( "BACK" , 231 , 360 );
        }
        if ( Game.GameState == Game.State.Difficulty ) {
            G.drawString ( "DIFFICULTY" , 90 , 90 );
            G.setColor ( Color.BLUE );
            font = new Font ( "arial" , Font.BOLD , 50 );
            G.setFont ( font );
            G.fillRect ( 180 , 120 , 250 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "NORMAL" , 195 , 170 );
            G.setColor ( Color.BLUE );
            G.fillRect ( 210 , 220 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "HARD" , 240 , 270 );
            G.setColor ( Color.BLUE );
            G.fillRect ( 210 , 320 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "BACK" , 240 , 370 );
        }
        if ( Game.GameState == Game.State.GameOver ) {
            if ( GameOverParticle ) {
                DrawParticles ( );
                GameOverParticle = false;
            }
            G.drawString ( "GAME OVER" , 80 , 70 );
            G.setColor ( Color.WHITE );
            font = new Font ( "arial" , Font.BOLD , 40 );
            G.setFont ( font );
            G.drawString ( "You lost " , 230 , 150 );
            G.drawString ( "Score " + HUD.Score , 235 , 220 );
            font = new Font ( "arial" , Font.BOLD , 50 );
            G.setFont ( font );
            G.setColor ( Color.BLUE );
            G.fillRect ( 210 , 330 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "RETRY" , 228 , 380 );
            G.setColor ( Color.BLUE );
            G.fillRect ( 210 , 250 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "MENU" , 240 , 300 );
        }
        if ( Game.GameState == Game.State.Won ) {
            if ( Game.Won ) {
                AudioPlayer.Music.get ( "Game Music" ).stop ( );
                AudioPlayer.Music.get ( "Menu Music" ).stop ( );
                AudioPlayer.Music.get ( "Won Music" ).loop ( 1,Calculations.volume);
                Game.Won = false;
            }
            if ( GameOverParticle ) {
                DrawParticles ( );
                GameOverParticle = false;
            }
            G.drawString ( "WINNER" , 150 , 70 );
            G.setColor ( Color.WHITE );
            font = new Font ( "arial" , Font.BOLD , 40 );
            G.setFont ( font );
            G.drawString ( "You Won " , 230 , 150 );
            G.drawString ( "Score " + HUD.Score , 235 , 220 );
            font = new Font ( "arial" , Font.BOLD , 50 );
            G.setFont ( font );
            G.setColor ( Color.BLUE );
            G.fillRect ( 210 , 330 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "RETRY" , 228 , 380 );
            G.setColor ( Color.BLUE );
            G.fillRect ( 210 , 250 , 200 , 64 );
            G.setColor ( Color.WHITE );
            G.drawString ( "MENU" , 240 , 300 );
        }
        if ( Game.GameState == Game.State.FastEnemy ) {
            Graphics2D G2D = ( Graphics2D ) G;
            G2D.setColor ( Color.BLACK );
            G2D.fillRect ( 0 , 0 , Game.Width , Game.Height );
            if ( sizeIncrease ) {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size <= 70 ? size += 2 : size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "FAST ENEMY" , Game.Width / 2 - 200 , Game.Height / 2 );
                if ( size == 70 ) {
                    sizeIncrease = false;
                    constant     = true;
                }
                try {
                    Thread.sleep ( 20 );
                } catch (Exception e) {
                    e.printStackTrace ( );
                }
            }
            else if ( constant ) {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "FAST ENEMY" , Game.Width / 2 - 200 , Game.Height / 2 );
                timer--;
                if ( timer == 0 )
                    constant = false;
            }
            else {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size >= 0 ? size -= 5 : size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "FAST ENEMY" , Game.Width / 2 - 200 , Game.Height / 2 );
                if ( size == 0 ) {
                    sizeIncrease = true;
                    changeState  = true;
                }
                try {
                    Thread.sleep ( 10 );
                } catch (Exception e) {
                    e.printStackTrace ( );
                }
            }
            if ( changeState ) {
                changeState    = false;
                constant       = true;
                timer          = 2000;
                Game.GameState = Game.State.Game;
            }
        }
        if ( Game.GameState == Game.State.BossLevel ) {
            Graphics2D G2D = ( Graphics2D ) G;
            G2D.setColor ( Color.BLACK );
            G2D.fillRect ( 0 , 0 , Game.Width , Game.Height );
            if ( sizeIncrease ) {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size <= 100 ? size += 2 : size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "BOSS" , Game.Width / 2 - 200 , Game.Height / 2 );
                if ( size == 100 ) {
                    sizeIncrease = false;
                    constant     = true;
                }
                try {
                    Thread.sleep ( 20 );
                } catch (Exception e) {
                    e.printStackTrace ( );
                }
            }
            else if ( constant ) {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "BOSS" , Game.Width / 2 - 200 , Game.Height / 2 );
                timer--;
                if ( timer == 0 )
                    constant = false;
            }
            else {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size >= 0 ? size -= 4 : size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "BOSS" , Game.Width / 2 - 200 , Game.Height / 2 );
                if ( size == 0 ) {
                    sizeIncrease = true;
                    changeState  = true;
                }
                try {
                    Thread.sleep ( 10 );
                } catch (Exception e) {
                    e.printStackTrace ( );
                }
            }
            if ( changeState ) {
                changeState    = false;
                constant       = true;
                timer          = 2000;
                Game.GameState = Game.State.Game;
            }
        }
        if ( Game.GameState == Game.State.AIEnemy ) {
            Graphics2D G2D = ( Graphics2D ) G;
            G2D.setColor ( Color.BLACK );
            G2D.fillRect ( 0 , 0 , Game.Width , Game.Height );
            if ( sizeIncrease ) {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size <= 50 ? size += 2 : size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "SMART ENEMY" , Game.Width / 2 - 200 , Game.Height / 2 );
                if ( size == 50 ) {
                    sizeIncrease = false;
                    constant     = true;
                }
                try {
                    Thread.sleep ( 20 );
                } catch (Exception e) {
                    e.printStackTrace ( );
                }
            }
            else if ( constant ) {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "SMART ENEMY" , Game.Width / 2 - 200 , Game.Height / 2 );
                timer--;
                if ( timer == 0 )
                    constant = false;
            }
            else {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size >= 0 ? size -= 5 : size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "SMART ENEMY" , Game.Width / 2 - 200 , Game.Height / 2 );
                if ( size == 0 ) {
                    sizeIncrease = true;
                    changeState  = true;
                }
                try {
                    Thread.sleep ( 10 );
                } catch (Exception e) {
                    e.printStackTrace ( );
                }
            }
            if ( changeState ) {
                changeState    = false;
                constant       = true;
                timer          = 2000;
                Game.GameState = Game.State.Game;
            }
        }
        if ( Game.GameState == Game.State.Powering ) {
            Graphics2D G2D = ( Graphics2D ) G;
            G2D.setColor ( Color.BLACK );
            G2D.fillRect ( 0 , 0 , Game.Width , Game.Height );
            if ( sizeIncrease ) {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size <= 90 ? size += 2 : size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "B.A.S.P" , Game.Width / 2 - (Menu.XDecrement+=4) , Game.Height / 2 );
                if ( size == 90 ) {
                    sizeIncrease = false;
                    constant     = true;
                }
                try {
                    Thread.sleep ( 50 );
                } catch (Exception e) {
                    e.printStackTrace ( );
                }
            }
            else if ( constant ) {
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , 20 ) );
                G2D.setColor ( new Color (visible,visible,visible ) );
                G2D.drawString ( "PRODUCER : ANONYMOUS",Game.Width/2+10,Game.Height/2+50 );
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "B.A.S.P" , Game.Width / 2 -Menu.XDecrement, Game.Height / 2 );
                if(visible<255) {
                    try {
                        Thread.sleep ( 100 );
                    } catch (Exception e) {
                        e.printStackTrace ( );
                    }
                    visible += 15;
                }
                else {
                    timer--;
                    if ( timer == 0 ) {
                        timer=10000;
                        constant = false;
                        stop=true;
                    }
                }
            }
            else if (stop){
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , 20 ) );
                G2D.setColor ( new Color (visible,visible,visible ) );
                G2D.drawString ( "PRODUCER : ANONYMOUS",Game.Width/2+10,Game.Height/2+50 );
                G2D.setFont ( new Font ( "Tahoma" , Font.BOLD | Font.ITALIC , size >= 0 ? size -= 2 : size ) );
                G2D.setColor ( Color.GREEN );
                G2D.drawString ( "B.A.S.P" , Game.Width / 2 - (Menu.XDecrement-=4) , Game.Height / 2 );
                if ( size == 0 ) {
                    sizeIncrease = true;
                    changeState  = true;
                }
                if(visible>0) {
                    visible -= 15;
                }
                try {
                    Thread.sleep ( 100 );
                } catch (Exception e) {
                    e.printStackTrace ( );
                }
            }
            if ( changeState ) {
                changeState    = false;
                constant       = true;
                timer          = 2000;
                Game.GameState = Game.State.Menu;
            }
        }
    }

    public void DrawParticles ( ) {
        for ( int i = 0 ; i < 40 ; i++ )
              Handler.object.add ( new ParticleSystem ( ( int ) Calculations.random ( 0 , Game.Width - 100 ) , ( int ) Calculations.random ( 0 , Game.Height - 100 ) , ID.Particle , ( int ) Calculations.random ( 1 , 10 ) , ( int ) Calculations.random ( 1 , 10 ) ) );
    }
}
