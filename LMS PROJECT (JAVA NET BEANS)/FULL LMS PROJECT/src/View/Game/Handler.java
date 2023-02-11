package View.Game;

import java.awt.*;
import java.util.LinkedList;

public class Handler {

    public final static LinkedList<GameObject> object = new LinkedList<> ( );

    public void tick ( ) {
        for ( int i = 0 ; i < object.size ( ) ; i++ ) {
            GameObject tempObject = object.get ( i );
            tempObject.tick ( );
        }
    }

    public void render ( Graphics G ) {
        for ( int i = 0 ; i < object.size ( ) ; i++ ) {
            GameObject tempObject = object.get ( i );
            tempObject.render ( G );
        }
        if ( Calculations.printVolumeBar )
            Calculations.volumeLevel ( G );
    }

    public static void addObject ( GameObject object ) {
        Handler.object.add ( object );
    }

    public static void removeObject ( GameObject object ) {
        Handler.object.remove ( object );
    }
}
