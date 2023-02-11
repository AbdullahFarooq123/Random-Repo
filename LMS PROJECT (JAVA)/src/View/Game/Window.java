package View.Game;

import javax.swing.*;
import java.awt.*;

public class Window extends Canvas {
    public static JFrame Frame ;
    public Window ( int Width , int Height , String Title , Game game ) {

        Frame = new JFrame ( Title );
        Frame.setPreferredSize ( new Dimension ( Width , Height ) );
        Frame.setMaximumSize ( new Dimension ( Width , Height ) );
        Frame.setMinimumSize ( new Dimension ( Width , Height ) );
        Frame.setDefaultCloseOperation ( JFrame.EXIT_ON_CLOSE );
        Frame.setResizable ( false );
        Frame.setLocationRelativeTo ( null );
        Frame.add ( game );
        Frame.setUndecorated ( true );
        Frame.setVisible ( true );
        game.start ( );

    }
}
