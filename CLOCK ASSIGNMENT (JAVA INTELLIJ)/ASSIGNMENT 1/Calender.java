import java.time.YearMonth;
import java.lang.String ;
import java.text.AttributedString;

public class Calender{
    public final String [] Month = {"January","February","March","April","May","June",
                                    "July","August","September","October","November",
                                    "December"} ;
    public final String [] Week = {"Monday","Tuesday","Wednesday","Thursday","Friday",
                                   "Saturday","Sunday"} ;
    private int Date ;
    private int Year ;
    private int monthIndex = 0 ;
    private int weekIndex = 0 ;
    private int totalDays ;

    public Calender(){
    }

    public void setInitialCalender(String _Week,String _Month,int Year){
        this.Year=Year;
        setInitials(_Week,_Month);
    }

    private void setInitials(String _Week,String _Month){
        setWeek(_Week);
        setMonth(_Month);
    }

    public void setFinals(int Date){
        this.Date=Date;
    }

    private void setWeek(String _Week){
        int i ;
        for (i=0;i<Week.length;i++)
            if (_Week.equals(Week[i])){
                weekIndex=i;
                break;
            }
    }

    private void setMonth(String _Month){
        int i ;
        for (i=0;i<Month.length;i++)
            if (_Month.equals(Month[i])) {
                monthIndex=i;
                break;
            }
            setDays(monthIndex+1,Year);
    }

    private void setDays(int month , int year){
        YearMonth totalDays = YearMonth.of(year,month);
        this.totalDays = totalDays.lengthOfMonth();
    }

    public int getTotalDays(){
        return totalDays;
    }

    private String getDate(){
        return Week[weekIndex] + " , " + getDateDigits() + " " + Month[monthIndex] + " , " + Year ;
    }

    public void printDate(){
        System.out.println(getDate());
    }

    private String getDateDigits(){
        Digit dateDigits = new Digit();
        dateDigits.setMinLimit(Date);
        return dateDigits.getDigits() + getSuffix(Date);
    }

    private String getSuffix (int Date){
        if (Date>10&&Date<13)
            return "th";
        else
            switch (Date%10){
                case 1:
                    return "st";
                case 2 :
                    return "nd" ;
                case 3 :
                    return "rd" ;
                default:
                    return "th";
        }
    }

    private void increment(){
        if (Clock.dayIncrement){
            Date++;
            weekIndex++;
        }
        if (Date>totalDays){
            monthIndex++;
        }
        if (monthIndex==Month.length){
            Year++;
        }
    }
    public void CalenderController(){
        setDays(monthIndex+1,Year);
        increment();
        if (monthIndex==Month.length)
            monthIndex=0;
        if (weekIndex==Week.length)
            weekIndex=0;
        if (Date>totalDays)
            Date=1;
    }
    

}
