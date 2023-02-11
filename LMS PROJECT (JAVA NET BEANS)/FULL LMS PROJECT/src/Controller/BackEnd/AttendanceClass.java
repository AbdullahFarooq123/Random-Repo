package Controller.BackEnd;

import java.io.*;
import java.time.LocalDate;
import java.util.HashMap;
import java.util.TreeMap;

@SuppressWarnings("serial")
public class AttendanceClass implements Serializable {
    private HashMap < String, HashMap < LocalDate, Boolean > > attendance = new HashMap <> ( );
    private TreeMap < String, LocalDate > time = new TreeMap <> ( );

    public AttendanceClass ( String path ) {
        loadAttendance ( path );
    }

    public void StoreAttendance ( String path ) {
        try {
            if ( path == null )
                path = "Attendance";
            if ( new File ( "Database\\" ).mkdir ( ) || new File ( "DataBase\\" ).exists ( ) ) {
                ObjectOutputStream outputStream = new ObjectOutputStream ( new FileOutputStream ( new File ( "Database\\" + path ) ) );
                outputStream.writeObject ( attendance );
                outputStream.writeObject ( time );
                outputStream.close ( );

            }
        } catch ( IOException e ) {
            e.printStackTrace ( );
        }

    }

    @SuppressWarnings("unchecked")
    public void loadAttendance ( String path ) {
        try {
            if ( path == null )
                path = "Attendance";
            if ( new File ( "Database\\" + path ).exists ( ) ) {
                ObjectInputStream inputStream = new ObjectInputStream ( new FileInputStream ( new File ( "Database\\" + path ) ) );
                attendance = (HashMap < String, HashMap < LocalDate, Boolean > >) inputStream.readObject ( );
                time = (TreeMap < String, LocalDate >) inputStream.readObject ( );

            }
        } catch ( IOException | ClassNotFoundException e ) {
            e.printStackTrace ( );
        }
    }

    public void MarkAttendance ( String name , boolean present ) {
        HashMap < LocalDate, Boolean > userAttendance = attendance.get ( name );
        LocalDate localDate = LocalDate.now ( );
        if ( userAttendance == null )
            userAttendance = new HashMap <> ( );

        if ( time.size ( ) > 0 && userAttendance.size ( ) != 0 ) {
            int index = localDate.compareTo ( time.get ( name ) );
            for ( int i = 1; i <= index; i++ ) {
                userAttendance.put ( time.get ( name ).minusDays ( -i ) , false );
            }
        }
        if ( userAttendance.containsKey ( localDate ) )
            userAttendance.replace ( localDate , present );
        else
            userAttendance.put ( localDate , present );
        if ( attendance.containsKey ( name ) )
            attendance.replace ( name , userAttendance );
        else
            attendance.put ( name , userAttendance );
        time.put ( name , localDate );


    }

    public void MarkAttendance ( String name , LocalDate date , boolean present ) {
        HashMap < LocalDate, Boolean > temp = attendance.get ( name );
        boolean isPresent =true;
        if(temp==null){
            temp=new HashMap<>();
            isPresent=false;
        }
        if ( temp.containsKey ( date ) ) {
            temp.replace ( date , present );
        } else
            temp.put ( date , present );
        if(isPresent)
        attendance.replace ( name , temp );
        else
            attendance.put(name, temp);
    }

    public void displayAttendance ( String id ) {
        if(attendance.containsKey ( id )) {
            System.out.println ( "**********ATTENDANCE**********" );
            for ( String name : attendance.keySet ( ) ) {
                if ( name.equals ( id ) ) {
                    for ( LocalDate tempDate : attendance.get ( name ).keySet ( ) ) {
                        System.out.println ( "Date : " + tempDate );
                        System.out.println ( "Attendance : " + (attendance.get ( name ).get ( tempDate ) ? "Present" : "Absent") );
                    }
                    System.out.println ( "******************************" );
                    break;
                }
            }
        }
        else
            System.out.println ( "No attendance found!" );
    }

    public void displayAttendance ( ) {
        if(attendance.size ()!=0) {
            System.out.println ( "**********ATTENDANCE**********" );
            for ( String name : attendance.keySet ( ) ) {
                System.out.println ( "Name : " + name );
                for ( LocalDate tempDate : attendance.get ( name ).keySet ( ) ) {
                    System.out.println ( "Date : " + tempDate );
                    System.out.println ( "Attendance : " + (attendance.get ( name ).get ( tempDate ) ? "Present" : "Absent") );
                }
            }
            System.out.println ( "******************************" );
        }
        else
            System.out.println ( "No attendance found!" );
    }

    public void removeUser ( String id ) {
        attendance.remove ( id );
        time.remove ( id );
    }

    public HashMap < String, HashMap < LocalDate, Boolean > > getAttendance ( ) {
        return attendance;
    }

}
