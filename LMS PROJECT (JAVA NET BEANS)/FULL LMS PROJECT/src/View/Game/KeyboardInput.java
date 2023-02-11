package View.Game;

import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.util.Arrays;

public class KeyboardInput extends KeyAdapter {

    private final boolean[] KeysPressed = new boolean[4];
    private final Game      game;

    public KeyboardInput ( Game game ) {
        this.game = game;
        Arrays.fill ( KeysPressed , false );
    }

    public void keyPressed ( KeyEvent Key ) {
        int key = Key.getKeyCode ( );
        if ( Game.GameState == Game.State.Game ) {
            for ( int i = 0 ; i < Handler.object.size ( ) ; i++ ) {
                GameObject tempObject = Handler.object.get ( i );
                if ( tempObject.getId ( ) == ID.Player ) {
                    if ( key == KeyEvent.VK_UP ) {
                        tempObject.setYVelocity ( - 5 );
                        KeysPressed[0] = true;
                    }
                    if ( key == KeyEvent.VK_DOWN ) {
                        tempObject.setYVelocity ( 5 );
                        KeysPressed[1] = true;
                    }
                    if ( key == KeyEvent.VK_RIGHT ) {
                        tempObject.setXVelocity ( 5 );
                        KeysPressed[2] = true;
                    }
                    if ( key == KeyEvent.VK_LEFT ) {
                        tempObject.setXVelocity ( - 5 );
                        KeysPressed[3] = true;
                    }
                }
            }
            if ( key == KeyEvent.VK_P ) {
                game.notPaused = ! game.notPaused;
                if ( ! game.notPaused ) AudioPlayer.Music.get ( "Game Music" ).pause ( );
                else AudioPlayer.Music.get ( "Game Music" ).resume ( );

            }
        }

        if ( key == KeyEvent.VK_ESCAPE )
            System.exit ( 1 );
        if ( key == KeyEvent.VK_ADD ) {
            for ( String music : AudioPlayer.Music.keySet ( ) ) {
                if ( AudioPlayer.getMusic ( music ).playing ( ) ) {
                    Calculations.volume = Calculations.clamp ( Calculations.volume , 0 , 0.09f );
                    AudioPlayer.getMusic ( music ).setVolume ( Calculations.volume += 0.001f );
                    Calculations.VolumeLevel -= 0.81f;
                    Calculations.volumeBar -= 0.81f;
                    Calculations.printVolumeBar=true;
                }
            }
        }
        if ( key == KeyEvent.VK_SUBTRACT ) {
            for ( String music : AudioPlayer.Music.keySet ( ) ) {
                if ( AudioPlayer.getMusic ( music ).playing ( ) ) {
                    Calculations.volume = Calculations.clamp ( Calculations.volume , 0 , 0.09f );
                    AudioPlayer.getMusic ( music ).setVolume ( Calculations.volume -= 0.001f );
                    Calculations.VolumeLevel += 0.89f;
                    Calculations.volumeBar += 0.89f;
                    Calculations.printVolumeBar=true;
                }
            }
        }
    }

    public void keyReleased ( KeyEvent Key ) {
        int key = Key.getKeyCode ( );
        if ( Game.GameState == Game.State.Game )
            for ( int i = 0 ; i < Handler.object.size ( ) ; i++ ) {
                GameObject tempObject = Handler.object.get ( i );
                if ( tempObject.getId ( ) == ID.Player ) {
                    if ( key == KeyEvent.VK_UP ) KeysPressed[0] = false;
                    if ( key == KeyEvent.VK_DOWN ) KeysPressed[1] = false;
                    if ( key == KeyEvent.VK_RIGHT ) KeysPressed[2] = false;
                    if ( key == KeyEvent.VK_LEFT ) KeysPressed[3] = false;
                    if ( ! KeysPressed[0] && ! KeysPressed[1] ) tempObject.setYVelocity ( 0 );
                    if ( ! KeysPressed[2] && ! KeysPressed[3] ) tempObject.setXVelocity ( 0 );
                }
            }
        if(key==KeyEvent.VK_ADD||key==KeyEvent.VK_SUBTRACT)
            Calculations.printVolumeBar=false;
    }

}
