//Libraries
import java.util.Scanner;//Scanner library

/**
 * This class contains all the methods in the classes
 * Bidder, Lot, Auction. This class actually performs
 * 90% of the work of main class. This class gets all
 * the inputs or calls the methods from previous classes
 * and contains all the logic for executing the program
 */
public class auctionEngine {
    /**
     * Class variables
     * Creates the object of the auction class
     * Creates object of Scanner class
     * Creates a variable naming managerId that stores the id of the head of the auction
     */
    private final Auction auction = new Auction();
    private final Scanner input = new Scanner(System.in);
    private String managerId ;

    /**
     * This method sets the id of the head of the auction.
     * Some actions like adding a lot or displaying the
     * highest bidder in the lot should be controlled by the
     * head, that's why the method and variable for
     * head's id was created
     */
    public void setManagerId(){
        System.out.println("********************WELCOME TO THE AUCTION********************");
        System.out.print("Please set your Manager Id no : ");
        managerId = input.next();
    }

    /**
     *This method returns the Id of the head/Manager
     */
    public String getManagerId(){
        return managerId;
    }

    /**
     * This method will set a lot in the auction list.
     * When adding a lot, no bidders will be added so
     * all its values will be null(bidder values)
     */
    public void setLot(){
        System.out.println("*****SET LOT*****");
        System.out.print("Please enter name of lot : ");
        String lot = input.next();
        System.out.print("Please enter the description of lot : ");
        String description = input.next();
        auction.highestValueBidder(new Lot(lot,description),new Bidder(null,null,0));
        clearScreen();//To clear the screen on the console.The method is defined below in the class
    }

    /**
     * This method just prints the menu for user
     * selection on the screen
     */
    public void menu(){
        System.out.println("********************WELCOME TO THE AUCTION********************");
        System.out.println("1.LOT");
        System.out.println("2.BID");
        System.out.println("3.DISPLAY WINNER");
        System.out.println("4.EXIT");
    }

    /**
     *This method will ask the user to select an option
     * The program will process according to the option
     * selected by the user.
     */
    public boolean menuSelection(){
        boolean Exit = false ;//This variable was created to check if user wants to exit the program or not
        /*
         * The function in the switch statement is responsible
         * to get a value from the user and check if it is an
         * integer or not and also if the value entered by the
         * user exists in the menu or not
         */
        switch(nextIntMenu()){
            /*
            *This case will allow the user to add a lot
            * It will only allow the user if he is the
            * manager of the auction otherwise user won't
            * access this option
            */
            case 1:
                clearScreen();//Clears the console screen
                System.out.print("Please enter your Manager Id : ");
                if (getManagerId().equals(input.next())) {//If manager id was correct user can set the lot otherwise not
                    clearScreen();
                    setLot();
                    break;
                } else System.out.println("Incorrect Manager Id!");
                sleep(3000);//Pauses the screen for 3sec
                clearScreen();//Clears the screen
                break ;
             /*
             *This case will let the user to bid against the lot
             * If user enters a wrong lot name, It will show the
             * lot and ask the user to enter a name from the lot
             */
            case 2:
                clearScreen();//Clears the console screen
                setBid();//Calls a function defined below in this class
                clearScreen();//Clears the console screen
                break ;
            /*
            * This case will print the bidders against the lot
            * This option is only accessible by the manager of the auction
            * If he is not, the program will not let him see the bidders
            * against the lot
            */
            case 3:
                clearScreen();//Clears the console screen
                System.out.print("Please enter your Manager Id : ");
                if (getManagerId().equals(input.next())) auction.display();//If manager id was correct it will display the auction list
                else System.out.println("Incorrect Manager Id!");
                sleep(5000);//Pauses the program for 5sec
                clearScreen();//Clears the console screen
                break;
            /*
            * This case will allow the user to exit the menu
            * This case is also accessible by the manager of
            * the auction only
            */
            case 4:
                clearScreen();//Clears the console screen
                System.out.print("Please enter your Manager Id : ");
                if (getManagerId().equals(input.next())) Exit=true;//If manager id was correct it will exit the menu
                else System.out.println("Incorrect Manager Id!");
                clearScreen();//Clears the console screen
                break;
            /*
            * This case is responsible for handling all the other options
            * a user enters.It will count as error by the program
            */
            default:
                clearScreen();//Clears the console screen
                System.out.println("Please select the correct option!");
                sleep(3000);//Pauses the program for 3 sec
                clearScreen();//Clears the console screen
                break;
        }
        return Exit;//Returns true, if user wants to exit otherwise false
    }

    /**
     * This method sets the bid of the bidder by getting the price,
     * name,CNIC and the name of the lot on which bidder wants to
     * bid on
     */
    private void setBid(){
        System.out.print("Please enter your name : ");
        String Name = input.next();//Gets name of the bidder
        System.out.print("Please enter your CNIC : ");
        String CNIC = input.next();//Gets CNIC of the bidder
        int price = nextInt() ;//Get bid price of the bidder
        String lotName ;//Variable for getting lotName from the user on which he/she wants to bid
        /*
        * The program will continue to ask the user about
        * the lot name till, the user enters the correct
        * name of the lot
        */
        do {
            System.out.print("Please enter the name of lot : ");
            lotName = input.next();
            /*
            * The while condition is a method in the
            * Auction class that searches the lot against
            * the lot name entered by the user and returns
            * true, if lotName was found otherwise returns
            * false
            */
        }while (!auction.search(lotName));
        /*
        * This method exists in auction class and puts the bidder against
        * the lot. The getLot() method exists in auction class. It returns
        * a variable naming lot that was set while searching the lotName
        * entered by the user
        */
        auction.highestValueBidder(auction.getLot(),new Bidder(Name,CNIC,price));
        clearScreen();//Clears the console screen
    }

    /**
     * This method returns an integer value responsible for getting
     * the correct bid price from the user. If user enters a character
     * instead of a string, it will give an error and ask the user to
     * enter the price again
     */
    private int nextInt(){
        Scanner input = new Scanner(System.in);//Scanner object
        boolean bad;//This variable will identify, if the value entered by the user was correct or not
        int value = 0;//The variable that is needed to be taken from the user
        do{
            try{//Try's if user enter a correct value
                System.out.print("Please enter your bid price : ");
                value=input.nextInt();//Input value from the user
                bad = false ;//If value was correct loop will terminate
            }catch(Exception e){
                clearScreen();//Clears the console screen
                System.out.println("Please enter an integer value!");
                sleep(2000);//Pauses the program for 2sec
                bad=true;//If value was not correct, the loop will not terminate
            }
        }while (bad);
        return value;//It will return the value got from the user
    }

    /**
     * This method is responsible for getting the correct
     * value of the menu from the user if user enter a
     * wrong value, the method will handle it and will ask
     * for a correct value. For example if user enters a
     * char instead of an int it will give an error
     */
    private int nextIntMenu(){
        Scanner input = new Scanner(System.in);//Scanner object
        boolean bad;//This variable will identify, if the value entered by the user was correct or not
        int value = 0;//The variable that is needed to be taken from the user
        do{
            try{//Try's if user enter a correct value
                System.out.print("Select an option : ");
                value=input.nextInt();//Input value from the user
                bad = false ;//If value was correct loop will terminate
            }catch(Exception e){
                clearScreen();//Clears the console screen
                System.out.println("Bad number!\nPlease enter between 1 & 3");
                sleep(2000);//Pauses the program for 2sec
                bad=true;//If value was not correct, the loop will not terminate
                clearScreen();//Clears the console screen
                menu();//Method responsible for printing the menu
                input.nextLine();
            }
        }while (bad);
        return value;//It will return the value got from the user
    }

    /**
     * This method is responsible for the continuation. For
     * if the user wants to continue the working in the
     * specific part on the screen
     */
    public boolean continueStatement(){
        boolean good;//If value entered by the user is either y or n this variable is responsible not to ask the user to enter value again
        boolean Exit = false;//This variable is responsible for if specific part of code should terminate or not
        do {
            clearScreen();//Clears the console screen
            System.out.print("Do you want to continue(y/n)? : ");
            /*
            * The method in the switch statement is responsible
            * for getting a character from the user
            */
            switch (input.next().charAt(0)) {
                /*
                * This case is responsible for either the specific
                * part of code should execute again
                */
                case 'y':
                case 'Y':
                    Exit = false;
                    good = true ;
                    break;
                /*
                 * This case is responsible for either the specific
                 * part of code should not execute again
                 */
                case 'n':
                case 'N':
                    Exit = true;
                    good=true;
                    break ;
                /*
                * This case is responsible if the user did not
                * selected the required value e.g 'y' or 'n'
                */
                default:
                    good = false;
                    break;
            }
        }while(!good);
        clearScreen();//Clears the console screen
        return Exit ;//Returns true if user wants to continue otherwise false
    }
    /**
    * This function clears the screen on the console
    */
    public void clearScreen(){
        try {
            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();//Main command responsible for clearing the screen
        }catch(Exception e){
            System.out.println("Sorry");
        }
    }

    /**
    * This function pauses the program for the some timePeriod of seconds, as passed in parameter
    */
    public void sleep(int value){
        try{
            Thread.sleep(value);//Main command responsible for pausing the program
        }catch (Exception e){
            System.out.println("Sorry");
        }
    }
}
