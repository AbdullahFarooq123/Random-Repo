import java.util.ArrayList;
import java.util.Random;

public class hourGlass{

    private final ArrayList<Integer> sumOfHourGlass = new ArrayList<>();
    private final twoDimensionalArray Array = new twoDimensionalArray();

    public  hourGlass(){
        for (int rows = 0 ; rows < Array.getRow() ; rows++)
            for ( int columns = 0 ; columns < Array.getColumn() ; columns++)
                Array.twoDimensionalArray[rows][columns]= new Random().nextInt(10);
    }
    public void logic(){
        for ( int rows = 0 ; rows <= getLimit(Array.getRow()) ; rows++)
            for ( int columns = 0 ; columns <= getLimit(Array.getColumn()) ; columns++)
                sumOfHourGlass.add(getHourGlassSum(rows,columns));
    }
    private int getHourGlassSum(int rows ,int columns){
        int sum = 0;
        for ( int rangeOfSum = columns ; rangeOfSum <= columns+2 ;rangeOfSum++)
            sum+=Array.twoDimensionalArray[rows][rangeOfSum];
        sum+=Array.twoDimensionalArray[rows+1][columns+1];
        for ( int rangeOfSum = columns ; rangeOfSum <= columns+2 ;rangeOfSum++)
            sum+=Array.twoDimensionalArray[rows+2][rangeOfSum];
        return sum ;
    }
    public void printArray(){
        System.out.println("2D array is : ");
        for (int rows = 0 ; rows < Array.getRow() ; rows++) {
            System.out.print("|    ");
            for ( int column = 0 ; column < Array.getColumn() ; column++)
                System.out.print(Array.twoDimensionalArray[rows][column]+"    ");
            System.out.println("|");
        }
    }
    public int calculateMaximumSum(){
        int maxvalue = 0 ;
        for (Integer arrayValue : sumOfHourGlass)
            if(maxvalue<arrayValue)
                maxvalue=arrayValue;
        return maxvalue;
    }
    public ArrayList<Integer> getNoOfHourGlass(){
        return sumOfHourGlass;
    }
    private int getLimit(int value){
        switch (value){
            case 3:
                return 0 ;
            case 4:
                return 1 ;
            case 5:
                return 2 ;
            default :
                return value - 3 ;
        }
    }
}
