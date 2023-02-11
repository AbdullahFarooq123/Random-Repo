package Controller.Account;

import java.io.*;

@SuppressWarnings("serial")
public class Logout extends Login implements Serializable {

    //Stores all the login details in a file as an object
    public void storeLoginCredentials ( ) {
        try {
            if ( new File ( "Database\\" ).mkdir ( ) || new File ( "Database\\" ).exists ( ) ) {
                ObjectOutputStream loginWriter = new ObjectOutputStream ( new FileOutputStream ( new File ( "Database\\login" ) ) );
                ObjectOutputStream AnsWriter = new ObjectOutputStream ( new FileOutputStream ( new File ( "Database\\questions" ) ) );
                loginWriter.writeObject ( Login );
                AnsWriter.writeObject ( SecurityAnswers );
                loginWriter.close ( );
                AnsWriter.close ( );
  
            }
        } catch ( IOException e ) {
            e.printStackTrace ( );
        }

    }
}
