package Controller.Account;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.Arrays;
import java.util.Scanner;
import java.util.TreeMap;

public class Login {
    //Security Questions array
    private final String[] questions = {"What was your childhood nick name?" , "What was your childhood school name?" , "In what city you were born?"};
    //Login TreeMap contains details about user's Login Id's and their passwords
    protected TreeMap < String, String > Login = new TreeMap <> ( );
    //SecurityAnswers TreeMap contains Username as key and value  as answers to security questions
    protected TreeMap < String, String > SecurityAnswers = new TreeMap <> ( );

    //Default Constructor
    public Login ( ) {
        //Will initialize Login and Security answers Tree Maps
        loadLoginCredentials ( );
    }

    //To initialize both above Tree Maps from files
    @SuppressWarnings("unchecked")
    private void loadLoginCredentials ( ) {
        /*
           Reads objects from the files
           and stores them into the hashmaps
        */
        try {
            if ( new File ( "Database\\login" ).exists ( ) && new File ( "Database\\questions" ).exists ( ) ) {
                ObjectInputStream loginInput = new ObjectInputStream ( new FileInputStream ( new File ( "Database\\login" ) ) );
                ObjectInputStream securityQuestionsInput = new ObjectInputStream ( new FileInputStream ( new File ( "Database\\questions" ) ) );
                Login = (TreeMap < String, String >) loginInput.readObject ( );
                SecurityAnswers = (TreeMap < String, String >) securityQuestionsInput.readObject ( );
                loginInput.close ( );
                securityQuestionsInput.close ( );
            }
        } catch ( ClassNotFoundException | IOException e ) {
            e.printStackTrace ( );
        }
    }

    //Lets user create his\her account
    public String signUp ( String name , String password , String ans1 , String ans2 , String ans3 ) {
        Login.put ( name , password );
        setSecurityAnswers ( name , ans1 , ans2 , ans3 );
        return name;
    }

    //Lets user set new password
    public void forgotPassword ( String name , String password ) {
        Login.replace ( name , password );
    }

    //Lets user set security answers for his\her account security
    private void setSecurityAnswers ( String name , String ans1 , String ans2 , String ans3 ) {
        StringBuilder oneLineAnswer=new StringBuilder();
        oneLineAnswer.append(ans1).append(",").append(ans2).append(",").append(ans3);
        SecurityAnswers.put ( name , oneLineAnswer.toString() );
    }

    //Lets user remove his/her account
    public void removeAccount ( String Id ) {
        if ( Login.containsKey ( Id ) ) {
            Login.remove ( Id );
            SecurityAnswers.remove ( Id );

        } 
    }

    //Displays all the accounts created
    public void displayLogins ( ) {
        if ( Login.size ( ) != 0 ) {
            System.out.println ( "**********LOGINS**********" );
            for ( String s : Login.keySet ( ) ) {
                System.out.println ( "User ID : " + s );
                System.out.println ( "User Password : " + Login.get ( s ) );
            }
            System.out.println ( "**************************" );
        } else
            System.out.println ( "No accounts found!" );
    }

    //Checks, if there is any space in the string
    private String checkSpace ( String tempString , String text ) {
        while ( tempString.contains ( " " ) ) {
            System.out.println ( "There should be no space!" );
            System.out.print ( text );
            tempString = new Scanner ( System.in ).nextLine ( );
        }
        return tempString;
    }

    //Confirms two strings to be equal
    private void checkConfirmation ( String compare , String to , String error , String text ) {
        while ( ! compare.equals ( to ) ) {
            System.out.println ( error );
            System.out.print ( text );
            to = new Scanner ( System.in ).nextLine ( );
        }
    }

    //Checks if passed username exists in the map
    private String checkUserName ( TreeMap < String, String > tempMap , String name ) {
        while ( tempMap.containsKey ( name ) ) {
            System.out.println ( "Username already exists!" );
            System.out.print ( "Please enter your Username(without spaces) : " );
            name = new Scanner ( System.in ).nextLine ( );
            name = checkSpace ( name , "Please enter your Username(without spaces) : " );
        }
        return name;
    }

    //Confirms, if username is present in the map
    private String confirmUserName ( String name , String error ) {
        while ( ! Login.containsKey ( name ) ) {
            System.out.println ( error );
            System.out.print ( "Please enter your Username again : " );
            name = new Scanner ( System.in ).next ( );
        }
        return name;
    }

    public TreeMap < String, String > getLogin(){
        return Login;
    }

    public TreeMap < String, String > getSecurityAnswers(){
        return SecurityAnswers;
    }
    
    public String getPassword(String id){
        return Login.get(id);
    }
    
    public String getAnswers(String id){
        return SecurityAnswers.get(id);
    }

}
