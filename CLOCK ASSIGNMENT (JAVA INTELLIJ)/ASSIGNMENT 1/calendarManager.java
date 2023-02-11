import java.util.Scanner;
public class calendarManager extends Calender{

    Calender calender = new Calender();
    Scanner input = new Scanner(System.in);

    public void Input(){
        int Date ;
        int Year ;
        int totalDays ;
        String Week ;
        String Month ;
        String text ;
        String error ;
        System.out.println("*****SET CALENDER*****") ;
        text="Please enter day (e.g Monday) : " ;
        error="Bad format!\nPlease enter from " + calender.Week[0] + " to " + calender.Week[6]+"!";
        Week=next(text,error,calender.Week);
        text="Please enter month (e.g January) : " ;
        error="Bad format!\nPlease enter from " + calender.Month[0] + " to " + calender.Month[11]+"!";
        Month=next(text,error,calender.Month);
        text="Please enter the year : " ;
        error="Bad format!\nPlease enter from 1800 to 2100!";
        Year=nextInt(text,error,1800,2100);
        calender.setInitialCalender(Week,Month,Year);
        totalDays=calender.getTotalDays();
        text="Please enter the date : " ;
        error="Bad format!\nPlease enter from 1 to " + totalDays+"!";
        Date = nextInt(text,error,1,totalDays);
        calender.setFinals(Date);
    }

    public void printCalendar(){
        calender.printDate();
    }
    public void getController(){
        calender.CalenderController();
    }

    private int nextInt(String text , String error,int minLimit , int maxLimit){
        int value = 0 ;
        boolean option ;
        do{
            try{
                System.out.println(text) ;
                value=input.nextInt();
                if (value < minLimit || value>maxLimit){
                    option=false ;
                    System.out.println(error);
                }
                else
                    option=true;
            }catch(Exception e){
                System.out.println(error);
                input.nextLine();
                option = false ;
            }
        }while(!option);
        return value ;
    }

    private String next(String text , String error, String[] array){
        String value = null ;
        boolean option ;
        boolean found = false;
        do{
            try{
                System.out.println(text) ;
                value=input.next();
                for(String s:array)
                    if (value.equals(s)) {
                        found=true;
                        break;
                    }
                if (!found) {
                    System.out.println(error);
                    option=false;
                } else
                    option=true;
            }catch(Exception e){
                System.out.println(error);
                input.nextLine();
                option = false ;
            }
        }while(!option);
        return value ;
    }

}
