package View.Game;

import java.awt.*;

public class Boss extends GameObject {
    private final Handler handler;
    private       int     YTimer    = 200;
    private       int     FireTimer = 15;

    public Boss ( float XCoordinate , float YCoordinate , ID id , Handler handler ) {
        super ( XCoordinate , YCoordinate , id );
        this.handler = handler;
        XVelocity    = 5;
        YVelocity    = 1;
    }

    public void tick ( ) {
        if ( YTimer >= 0 ) {
            YTimer--;
            if ( YCoordinate <= 0 )
                YCoordinate += YVelocity;
        }

        else {
            XCoordinate += XVelocity;
            if ( XCoordinate <= 0 || XCoordinate >= Game.Width - 95 ) XVelocity *= - 1;
            Handler.addObject ( new Trail ( XCoordinate , YCoordinate , ID.Trail , 80 , 80 , 0.03f , Calculations.ColorChange ( ) ) );
            for ( int i = 0 ; i < Calculations.random ( 1 , 3 ) && FireTimer == 0 ; i++ )
                  Handler.addObject ( new BossFire ( XCoordinate * ( int ) Calculations.random ( - 1 , 1 ) , YCoordinate + 70 , ID.Fire , ( float ) Calculations.random ( 2 , 6 ) , Calculations.ColorChange ( ) ) );
            if ( FireTimer == 0 ) {
                FireTimer = 15;
                Game.changeColors++;
            }
            else FireTimer--;
        }
    }

    public void render ( Graphics G ) {
        G.setColor ( Calculations.ColorChange ( ) );
        G.fillRect ( ( int ) XCoordinate , ( int ) YCoordinate , 80 , 80 );
    }

    public Rectangle getBounds ( ) {
        return new Rectangle ( ( int ) XCoordinate , ( int ) YCoordinate , 80 , 80 );
    }

}
