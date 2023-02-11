package Controller.BackEnd;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.TreeMap;

public interface UsersAccess {
    void access ( );

    String getName ( );

    String getCNIC ( );

    String getJobStatus ( );

    UsersClass getUser ( String id );

    TreeMap < String, UsersClass > getUsers ( );

    void addUser ( String iD , UsersClass user );

    void removeUser ( String name );

    void displayUsers ( );

    void markAttendance ( String name , boolean present );

    void markAttendance ( String name , LocalDate date , boolean present );

    void displayAttendance ( );

    void displayAttendance ( String name );

    TreeMap < String, TreeMap < LocalDate, Boolean > > getAttendance ( );

    void printAttendancePercentage ( );

    String getAttendancePercentage ( String id );

    void addSubject ( SubjectClass subject , TreeMap < String, Double > Students );

    void removeSubject ( String subjectName );

    SubjectClass getSubject ( String id );

    void markSubjectAttendance ( SubjectClass subject , String name , boolean present );

    void markSubjectAttendance ( SubjectClass subject , String name , LocalDate date , boolean present );

    void displaySubjectAttendance ( String subjectName );

    ArrayList < SubjectClass > getSubjects ( );

    HashMap < SubjectClass, AttendanceClass > getAttendanceObjects ( );

    void displayAllSubjects ( );

    TreeMap < String, Double > getStudents ( SubjectClass subject );

    String signUp ( String name , String password , String ans1 , String ans2 , String ans3 );

    void forgotPassword ( String name , String password );
}
