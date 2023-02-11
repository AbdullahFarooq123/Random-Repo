public class Main {
    /**
     * Main class to run the program
     * It controls when to print when
     * to take inputs from the user
     */
    public static void main(String [] args){
        auctionEngine Engine = new auctionEngine();//Object of class auctionEngine
        Engine.clearScreen();//Clears the console screen
        /*
        * Method declared in auctionEngine class
        * It is responsible for setting the managers Id
        */
        Engine.setManagerId();
        Engine.clearScreen();//Clears the console screen
        do{
           /*
           * Method declared in auctionEngine class
           * It is responsible for setting the lot
           */
            Engine.setLot();
            /*
            * The condition is declared and defined in
            * auctionEngine class. It returns true if
            * user wants to add more lots in the list
            * otherwise returns false
            */
        }while(!Engine.continueStatement());
        do{
            /*
            * This method is also declared in the
            * auctionEngine class. It is responsible
            * for printing the menu on the screen
            */
            Engine.menu();
            /*
            * The condition method is also declared in the
            * auction Engine class and it is responsible
            * for taking the right value from the user as well
            * as performing further tasks as per user requirement
            */
        }while(!Engine.menuSelection());
    }
}
