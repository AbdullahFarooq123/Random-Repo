package Controller.BackEnd;

import Controller.Account.Logout;

import java.io.Serializable;
import java.util.TreeMap;

@SuppressWarnings("serial")
public class DataClass implements Serializable {
    private final Logout login = new Logout ();
    private TreeMap < String, UsersClass > User = new TreeMap <> ( );
    private final AttendanceClass attendance = new AttendanceClass ( null );
    private final AnalyticsClass analytics = new AnalyticsClass ( attendance );
    //User hashMap contains name,cnic and jobStatus as users and Username as Value

    public AttendanceClass getAttendance ( ) {
        return attendance;
    }

    public AnalyticsClass getAnalytics ( ) {
        return analytics;
    }

    public TreeMap < String, UsersClass > getUser ( ) {
        return User;
    }

    public void setUser ( TreeMap < String, UsersClass > user ) {
        User = user;
    }


    public Logout getLogin ( ) {
        return login;
    }
}
