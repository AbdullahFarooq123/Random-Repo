import java.util.Scanner;

public class twoDimensionalArray{
    public final int [][] twoDimensionalArray ;
    private final int rows ;
    private final int columns ;
    public twoDimensionalArray(){
        twoDimensionalArray = new int[rows = getRows()][columns = getColumns()];
    }
    private int getRows(){
        String text = "Please enter number of rows : ";
        String [] error = {"Please enter an integer!" , "Please enter a positive integer greater than 3!"};
        return nextInt( text , error ) ;
    }
    private int getColumns(){
        String text = "Please enter number of columns : ";
        String [] error = {"Please enter an integer!" , "Please enter a positive integer greater than 3!"};
        return nextInt( text , error ) ;
    }
    public int getRow(){
        return rows;
    }
    public int getColumn(){
        return columns;
    }
    private int nextInt(String text , String [] error){
        int value = 0 ;
        boolean correct;
        do {
            try {
                System.out.print(text);
                value = new Scanner(System.in).nextInt();
                correct = true ;
                if (value<3){
                    System.out.println(error[1]);
                    correct=false;
                }
            } catch (Exception e) {
                System.out.println(error[0]);
                correct=false;
            }
        }while (!correct);
        return value ;
    }
}
