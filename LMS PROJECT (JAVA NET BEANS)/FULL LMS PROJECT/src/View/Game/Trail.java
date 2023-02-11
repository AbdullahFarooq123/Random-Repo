package View.Game;

import java.awt.*;

public class Trail extends GameObject {

    private       float alpha = 1;
    private final int   Width;
    private final int   Height;
    private final float Life;
    private final Color color;

    public Trail ( float x , float y , ID id , int Width , int Height , float Life , Color color ) {
        super ( x , y , id );
        this.color  = color;
        this.Width  = Width;
        this.Height = Height;
        this.Life   = Life;
    }

    public void tick ( ) {
        if ( alpha > Life )
            alpha -= Life - 0.001f;
        else
            Handler.removeObject ( this );
    }

    public void render ( Graphics G ) {
        Graphics2D g2d = ( Graphics2D ) G;
        g2d.setComposite ( makeTransparent ( alpha ) );
        G.setColor ( color );
        G.fillRect ( ( int ) XCoordinate , ( int ) YCoordinate , Width , Height );
        g2d.setComposite ( makeTransparent ( 1 ) );
    }

    private AlphaComposite makeTransparent ( float alpha ) {
        int type = AlphaComposite.SRC_OVER;
        return AlphaComposite.getInstance ( type , alpha );
    }

    public Rectangle getBounds ( ) {
        return null;
    }

}
