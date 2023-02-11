package View.Game;

import java.awt.*;

public class AIEnemy extends GameObject {

    private final Color      color;
    private       GameObject player;
    private final int        SpeedX;
    private final int        SpeedY;

    public AIEnemy ( float x , float y , ID id , Color color , int SpeedX , int SpeedY ) {
        super ( x , y , id );
        this.color  = color;
        this.SpeedX = SpeedX;
        this.SpeedY = SpeedY;
        for ( int i = 0 ; i < Handler.object.size ( ) ; i++ )
            if ( Handler.object.get ( i ).getId ( ) == ID.Player )
                player = Handler.object.get ( i );
    }

    public void tick ( ) {
        XCoordinate += XVelocity * SpeedX;
        YCoordinate += YVelocity * SpeedY;
        float XDifference = XCoordinate - player.getXCoordinate ( ) - 8;
        float YDifference = YCoordinate - player.getYCoordinate ( ) - 8;
        float Distance = ( float ) Math.sqrt ( Math.pow ( XCoordinate - player.getXCoordinate ( ) , 2 ) + Math.pow ( YCoordinate - player.getYCoordinate ( ) , 2 ) );
        XVelocity = ( float ) ( ( - 1.0 / Distance ) * XDifference );
        YVelocity = ( float ) ( ( - 1.0 / Distance ) * YDifference );
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
