package View.Game;

import java.awt.*;

public class Enemy extends GameObject {

    private final Color   color;

    public Enemy ( float x , float y , ID id , float VelocityX , float VelocityY , Color color ) {
        super ( x , y , id );
        XVelocity    = VelocityX;
        YVelocity    = VelocityY;
        this.color   = color;
    }

    public void tick ( ) {
        XCoordinate += XVelocity;
        YCoordinate += YVelocity;
        if ( YCoordinate <= 0 || YCoordinate >= Game.Height - 64 ) YVelocity *= - 1;
        if ( XCoordinate <= 0 || XCoordinate >= Game.Width - 32 ) XVelocity *= - 1;
        Handler.addObject ( new Trail ( XCoordinate , YCoordinate , ID.Trail , 16 , 16 , 0.03f , color ) );
    }

    public void render ( Graphics G ) {
        G.setColor ( color );
        G.fillRect ( ( int ) XCoordinate , ( int ) YCoordinate , 16 , 16 );
    }

    public Rectangle getBounds ( ) {
        return new Rectangle ( ( int ) XCoordinate , ( int ) YCoordinate , 16 , 16 );
    }

}
