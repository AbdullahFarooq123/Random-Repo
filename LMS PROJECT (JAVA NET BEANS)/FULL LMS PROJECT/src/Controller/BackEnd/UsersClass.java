package Controller.BackEnd;

import Controller.Account.Logout;

import java.io.*;
import java.time.LocalDate;
import java.util.HashMap;
import java.util.TreeMap;

@SuppressWarnings("serial")
public class UsersClass implements Serializable {
    protected static String id;
    private final DataClass data;
    private final Logout login;
    private final TreeMap < String, UsersClass > User;
    private final AttendanceClass attendance;
    private final AnalyticsClass analytics;
    private String Name;
    private String CNIC;
    private String jobStatus;

    //Default constructor
    public UsersClass ( DataClass data ) {
        this.data = data;
        loadUserDetails ( );
        login = data.getLogin ( );
        User = data.getUser ( );
        attendance = data.getAttendance ( );
        analytics = data.getAnalytics ( );
    }

    //Parameterized Constructor
    protected UsersClass ( String Name , String CNIC , String jobStatus , DataClass data ) {
        this.data = data;
        this.Name = Name;
        this.CNIC = CNIC;
        this.jobStatus = jobStatus;
        login = data.getLogin ( );
        User = data.getUser ( );
        attendance = data.getAttendance ( );
        analytics = data.getAnalytics ( );
    }

    //Stores User hashMap in a file naming User
    public void storeUserDetails ( ) {
        try {
            if ( new File ( "Database\\" ).mkdir ( ) || new File ( "Database\\" ).exists ( ) ) {
                ObjectOutputStream file = new ObjectOutputStream ( new FileOutputStream ( new File ( "Database\\User" ) ) );
                file.writeObject ( User );
                file.close ( );
            }
        } catch ( IOException e ) {
            e.printStackTrace ( );
        }
        login.storeLoginCredentials ( );
        attendance.StoreAttendance ( null );
        //subject.storeSubject ( );
    }

    //Loads into User hashMap data from a file naming User
    @SuppressWarnings("unchecked")
    private void loadUserDetails ( ) {
        try {
            if ( new File ( "Database\\" ).exists ( ) ) {
                ObjectInputStream file = new ObjectInputStream ( new FileInputStream ( new File ( "Database\\User" ) ) );
                data.setUser ((TreeMap < String, UsersClass >) file.readObject ( ) );
            }
        } catch ( IOException | ClassNotFoundException e ) {
            e.printStackTrace ( );
        }
    }

    //Returns name of user
    public String getName ( ) {
        return Name;
    }

    //Returns CNIC of the user
    public String getCNIC ( ) {
        return CNIC;
    }

    //Returns jobStatus of the user
    public String getJobStatus ( ) {
        return jobStatus;
    }

    //Returns user against the id
    public UsersClass getUser ( String id ) {
        return User.get ( id );
    }

    //Returns User Hash Map
    public TreeMap < String, UsersClass > getUsers ( ) {
        return User;
    }

    //Adds a new user in the hashMap
    public void addUser ( String iD , UsersClass user ) {
        User.putIfAbsent ( iD,user );
    }

    //Removes a user from hashmap
    public void removeUser ( String name ) {
        boolean found = false;
        for ( String id : User.keySet ( ) ) {
            if ( User.get ( id ).getName ( ).equals ( name ) ) {
                login.removeAccount ( id );
                attendance.removeUser ( User.get ( id ).getName ( ) );
                analytics.removeAnalytics ( User.get ( id ).getName ( ) );
                User.remove ( id );
                System.out.println ( "Users removed successfully!" );
                found = true;
            }
        }
        if ( ! found )
            System.out.println ( "User with name " + name + " not found!" );
    }

    //Displays all the users in the hashMap excluding management Users
    public void displayUsers ( ) {
        boolean found = false;
        if ( User.size ( ) != 0 ) {
            System.out.println ( "**********USERS**********" );
            for ( UsersClass user : User.values ( ) ) {
                if ( ! user.getJobStatus ( ).equals ( "Management" ) ) {
                    System.out.println ( "Name : " + user.getName ( ) );
                    System.out.println ( "CNIC : " + user.getCNIC ( ) );
                    System.out.println ( "Job Status : " + user.getJobStatus ( ) );
                } else if ( user.getJobStatus ( ).equals ( "Management" ) )
                    found = true;
            }
            System.out.println ( "*************************" );
            login.displayLogins ( );
        }
        if ( ! found ) {
            System.out.println ( "No users found!" );
        }
    }

    public void markAttendance ( String name , boolean present ) {
        attendance.MarkAttendance ( name , present );
        calculateAttendancePercentage ( );
    }

    public void markAttendance ( String name , LocalDate date , boolean present ) {
        attendance.MarkAttendance ( name , date , present );
        calculateAttendancePercentage ( );
    }

    public void displayAttendance ( ) {
        calculateAttendancePercentage ( );
        attendance.displayAttendance ( );
    }

    public void displayAttendance ( String name ) {
        calculateAttendancePercentage ( );
        attendance.displayAttendance ( name );
    }

    public HashMap < String, HashMap < LocalDate, Boolean > > getAttendance ( ) {
        return attendance.getAttendance ( );
    }

    public void calculateAttendancePercentage ( ) {
        analytics.calculateAttendancePercentage ( );
    }

    public void printAttendancePercentage ( ) {
        calculateAttendancePercentage ( );
        analytics.printPercentage ( );
    }

    public String getAttendancePercentage ( String id ) {
        calculateAttendancePercentage ( );
        return analytics.getPercentage ( id );
    }

    public String signUp ( String name , String password , String ans1 , String ans2 , String ans3 ) {
        return login.signUp ( name , password , ans1 , ans2 , ans3 );
    }

    public void forgotPassword ( String name , String password ) {
        login.forgotPassword ( name , password );
    }
    
    public TreeMap < String, String > getLogin(){
        return login.getLogin ();
    }
    
    public TreeMap < String, String > getSecurityAnswers(){
        return login.getSecurityAnswers ();
    }
    
    public Logout getLoginObj(){
        return login;
    }

}

