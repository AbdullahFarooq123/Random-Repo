import java.util.Scanner;
public class clockManager {

    Clock clock = new Clock(0,60,0,24) ;
    Scanner input = new Scanner(System.in) ;
    private int minLimit ;
    private int maxHours;

    public void Input(){
        int hours ;
        int minutes ;
        int seconds ;
        hourFormat();
        String text ;
        String error ;
        clock.setMaxHours(maxHours);
        clock.setMinHours(minLimit);
        text = "******SET CLOCK******\nPlease enter hours : " ;
        error = "Bad number!" ;
        hours = nextInt(text,error,minLimit,maxHours-1) ;
        text = "Please enter minutes : " ;
        error = "Bad number!" ;
        minutes = nextInt(text,error,0,60-1) ;
        text = "Please enter seconds : " ;
        error = "Bad number!" ;
        seconds = nextInt(text,error,0,60-1) ;
        clock.setClock(hours,minutes,seconds,setDayTime(maxHours),minLimit);
    }

    public void printClock(){
        clock.getDisplay();
    }

    public void getClockController(){
        clock.clockController();
    }

    private void hourFormat (){
        String text ;
        String error ;
        text = "Please select hours format : \n 1. 12Hrs \n 2. 24Hrs" ;
        error = "Bad number!" ;
        switch (nextInt(text,error,1,2)){
            case 1 :
                maxHours = 13 ;
                minLimit=1;
                break ;
            case 2 :
                maxHours = 24 ;
                minLimit=0;
        }
    }

    private String setDayTime (int format){
        String dayTime = "";
        if (format == 13){
            String text = "Please select daytime : \n 1. am \n 2. pm" ;
            String error = "Bad number!" ;
            switch (nextInt(text,error,1,2)){
                case 1 :
                    dayTime = "am " ;
                    break ;
                case 2 :
                    dayTime = "pm " ;
            }
        }
        return dayTime;
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
}
