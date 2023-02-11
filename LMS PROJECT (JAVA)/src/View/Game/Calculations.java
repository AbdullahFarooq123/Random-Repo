package View.Game;

import java.awt.*;
import java.util.Random;

public class Calculations {
    private static boolean Red        = true;
    private static boolean Green      = true;
    private static boolean Blue       = true;
    private static int     RedValue   = 255;
    private static int     GreenValue = 1;
    private static int     BlueValue  = 1;
    public static float volume      = 0.09f ;
    public static float VolumeLevel = 330.0f;
    public static float volumeBar   = 0.0f;
    public static boolean printVolumeBar = false ;

    public static float clamp ( float variable , float min , float max ) {
        if ( variable >= max )
            variable = max;
        else if ( variable <= min )
            variable = min;
        return variable;
    }

    public static double random ( double min , double max ) {
        int value = ( int ) ( min + ( new Random ( ).nextDouble ( ) * ( max - min ) ) );
        return value == 0 ? value + 1 : value;
    }

    public static void ClearObjects ( ) {
        Handler.object.removeIf ( Objects -> Objects.getId ( ) != ID.Player );
    }

    public static void ClearAllObjects ( ) {
        Handler.object.clear ( );
    }

    public static int PlayerPosition ( double min , double max , int player ) {
        int Rand;
        do {
            Rand = ( int ) random ( min , max ) + ( int ) ( random ( 1 , 5 ) );
        } while (Rand == player);
        return Rand;
    }

    public static int getPlayerPositionX ( ) {
        for ( GameObject tempObject : Handler.object )
            if ( tempObject.getId ( ) == ID.Player )
                return ( int ) tempObject.XCoordinate;
        return 0;
    }

    public static int getPlayerPositionY ( ) {
        for ( GameObject tempObject : Handler.object )
            if ( tempObject.getId ( ) == ID.Player )
                return ( int ) tempObject.YCoordinate;
        return 0;
    }

    public static int spawnEnemyX ( ) {
        return PlayerPosition ( 1 , Game.Width - 100 , getPlayerPositionX ( ) );
    }

    public static int spawnEnemyY ( ) {
        return PlayerPosition ( 1 , Game.Height - 100 , getPlayerPositionY ( ) );
    }

    public static Color ColorChange ( ) {
        if ( Red ) {
            RedValue -= 2;
            if ( RedValue <= 1 )
                Red = false;
        }
        if ( Blue ) {
            BlueValue += 3;
            if ( BlueValue >= 254 )
                Blue = false;
        }
        if ( Green ) {
            GreenValue += 4;
            if ( GreenValue >= 254 )
                Green = false;
        }
        if ( ! Red ) {
            RedValue += 2;
            if ( RedValue >= 254 )
                Red = true;
        }
        if ( ! Blue ) {
            BlueValue -= 3;
            if ( BlueValue <= 1 )
                Blue = true;
        }
        if ( ! Green ) {
            GreenValue -= 4;
            if ( GreenValue <= 1 )
                Green = true;
        }
        return new Color ( RedValue , GreenValue , BlueValue );
    }

    public static void Reset ( ) {
        HUD.Score             = 0;
        HUD.Level             = 1;
        HUD.Health            = 100;
        Spawn.scoreKeep       = 0;
        Spawn.ChangeLevel     = 250;
        Menu.GameOverParticle = true;
    }
    public static void volumeLevel ( Graphics G ){
        volumeBar=Calculations.clamp ( volumeBar,0,80 );
        VolumeLevel=Calculations.clamp ( VolumeLevel,330,410 );
        G.setColor ( Color.GRAY );
        G.fillRect ( 10,Game.Height-150,10,100 );
        G.setColor ( Color.DARK_GRAY );
        G.fillRect ( 10,Game.Height-150,9,(int)volumeBar );
        G.setColor ( Color.GRAY );
        G.drawRect ( 10,Game.Height-150,9,(int) volumeBar );
        G.setColor ( Color.BLUE );
        G.fillOval ( 4,(int)VolumeLevel  , 20, 20 );
        G.setColor ( Color.BLUE );
    }
}
