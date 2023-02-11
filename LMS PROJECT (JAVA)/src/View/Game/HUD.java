package View.Game;

import java.awt.*;

public class HUD {

    public static float Health     = 100;
    public static int   Score      = 0;
    public static int   Level      = 1;
    private       float GreenValue = 255;

    public void tick ( ) {
        Health     = Calculations.clamp ( Health , 0 , 100 );
        GreenValue = Calculations.clamp ( GreenValue , 0 , 255 );
        GreenValue = Health * 2;
        Score++;
    }

    public void render ( Graphics G ) {
        G.setColor ( Color.GRAY );
        G.fillRect ( 15 , 15 , 200 , 32 );
        G.setColor ( new Color ( 75 , ( int ) GreenValue , 0 ) );
        G.fillRect ( 15 , 15 , ( int ) Health * 2 , 32 );
        G.setColor ( new Color ( 75 , ( int ) GreenValue , 0 ) );
        G.drawRect ( 15 , 15 , 200 , 32 );
        G.setFont ( new Font ( "Tahoma" , Font.BOLD , 20 ) );
        G.drawString ( "Score : " + Score , 15 , 70 );
        G.drawString ( "Level : " + Level , 15 , 90 );
        G.setColor ( Color.WHITE );
        G.drawString ( "FPS : " + Game.FPS , 15 , 115 );
    }

    public void setLevel ( int Level ) {
        HUD.Level = Level;
    }

    public int getLevel ( ) {
        return Level;
    }

}
