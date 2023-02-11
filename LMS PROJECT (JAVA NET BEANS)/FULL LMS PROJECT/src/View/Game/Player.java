package View.Game;

import java.awt.*;

public class Player extends GameObject {

    Handler handler;

    public Player ( float XCoordinate , float YCoordinate , ID id , Handler handler ) {
        super ( XCoordinate , YCoordinate , id );
        this.handler = handler;
    }

    public void tick ( ) {
        XCoordinate += XVelocity;
        YCoordinate += YVelocity;
        XCoordinate = Calculations.clamp ( XCoordinate , 0 , Game.Width - 48 );
        YCoordinate = Calculations.clamp ( YCoordinate , 0 , Game.Height - 71 );
        Handler.addObject ( new Trail ( XCoordinate , YCoordinate , ID.Trail , 32 , 32 , 0.08f , Color.white ) );
        collision ( );
    }

    public void render ( Graphics G ) {
        G.setColor ( Color.white );
        G.fillRect ( ( int ) XCoordinate , ( int ) YCoordinate , 32 , 32 );
    }

    public Rectangle getBounds ( ) {
        return new Rectangle ( ( int ) XCoordinate , ( int ) YCoordinate , 32 , 32 );
    }

    private void collision ( ) {
        for ( int i = 0 ; i < Handler.object.size ( ) ; i++ ) {
            GameObject tempObject = Handler.object.get ( i );
            if ( tempObject.getId ( ) == ID.Enemy || tempObject.getId ( ) == ID.AIEnemy || tempObject.getId ( ) == ID.Fire || tempObject.getId ( ) == ID.Boss ) {
                if ( getBounds ( ).intersects ( tempObject.getBounds ( ) ) ) {
                    if ( Game.GameDifficulty == Game.Difficulty.Normal )
                        HUD.Health -= 1;
                    else
                        HUD.Health -= 4;
                }
            }
        }
        if ( HUD.Health == 0 ) {
            AudioPlayer.Music.get ( "Game Music" ).stop ( );
            AudioPlayer.getSound ( "OOH" ).loop (1,Calculations.volume );
            Calculations.ClearAllObjects ();
            Game.GameState = Game.State.GameOver;
        }
    }
}
