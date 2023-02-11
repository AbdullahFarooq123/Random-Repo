package Controller.BackEnd;

import java.io.Serializable;
import java.time.LocalDate;
import java.time.YearMonth;
import java.util.HashMap;
import java.util.TreeMap;

@SuppressWarnings("serial")
public class AnalyticsClass implements Serializable {
    private final AttendanceClass attendance;
    private final TreeMap < String, Double > attendancePercentage = new TreeMap <> ( );

    public AnalyticsClass ( AttendanceClass attendance ) {
        this.attendance = attendance;
    }

    public void calculateAttendancePercentage ( ) {
        HashMap < String, HashMap < LocalDate, Boolean > > tempMap = attendance.getAttendance ( );
        for ( String name : tempMap.keySet ( ) ) {
            boolean run = true;
            double i = 0;
            LocalDate tempDate = null;
            for ( LocalDate localDate : tempMap.get ( name ).keySet ( ) ) {
                if ( run ) {
                    tempDate = localDate;
                    run = false;
                }
                if ( tempMap.get ( name ).get ( localDate ) )
                    ++i;
            }
            assert tempDate != null;
            if ( !this.attendancePercentage.containsKey ( name ) )
                this.attendancePercentage.put ( name , (i / tempMap.get ( name ).size ( )) * 100 );
            else
                this.attendancePercentage.replace ( name , (i / tempMap.get ( name ).size ( )) * 100 );

        }
    }

    private LocalDate getLastDate ( LocalDate date ) {
        YearMonth thisYearMonth = YearMonth.of ( date.getYear ( ) , date.getMonthValue ( ) );
        return thisYearMonth.atEndOfMonth ( );
    }

    public void printPercentage ( ) {
        if ( attendancePercentage.size ( ) != 0 ) {
            System.out.println ( "**********ATTENDANCE PERCENTAGE**********" );
            for ( String tempName : attendancePercentage.keySet ( ) ) {
                System.out.println ( "Name : " + tempName );
                System.out.println ( "Percentage : " + String.format ( "%.1f" , attendancePercentage.get ( tempName ) ) + "%" );
            }
            System.out.println ( "*****************************************" );
        } else
            System.out.println ( "No attendance found!" );
    }

    public String getPercentage ( String id ) {
        if ( attendancePercentage.get ( id ) != null && attendancePercentage.size ( ) != 0 )
            return String.format ( "%.1f" , attendancePercentage.get ( id ) ) + "%" ;
        return "";
    }

    public void removeAnalytics ( String name ) {
        attendancePercentage.remove ( name );
    }

}
