package View.Game;

import java.awt.*;

public class ParticleSystem extends GameObject {
    private final int     RedValue   = ( int ) Calculations.random ( 1 , 255 );
    private final int     GreenValue = ( int ) Calculations.random ( 1 , 255 );
    private final int     BlueValue  = ( int ) Calculations.random ( 1 , 255 );

    public ParticleSystem ( float x , float y , ID id , float VelocityX , float VelocityY ) {
        super ( x , y , id );
        XVelocity    = VelocityX;
        YVelocity    = VelocityY;
    }

    public void tick ( ) {
        XCoordinate += XVelocity;
        YCoordinate += YVelocity;
        if ( YCoordinate <= 0 || YCoordinate >= Game.Height - 64 ) YVelocity *= - 1;
        if ( XCoordinate <= 0 || XCoordinate >= Game.Width - 32 ) XVelocity *= - 1;
        Handler.addObject ( new Trail ( XCoordinate , YCoordinate , ID.Trail , 16 , 16 , 0.04f , new Color ( RedValue , GreenValue , BlueValue ) ) );
    }

    public void render ( Graphics G ) {
        G.setColor ( new Color ( RedValue , GreenValue , BlueValue ) );
        G.fillRect ( ( int ) XCoordinate , ( int ) YCoordinate , 16 , 16 );
    }

    public Rectangle getBounds ( ) {
        return new Rectangle ( ( int ) XCoordinate , ( int ) YCoordinate , 16 , 16 );
    }

}
