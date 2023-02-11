//Libraries
import java.util.HashMap;//Hashmap library
/**
* This class deals with all the storage working of the Lot and bids
* on the lot and all the operational methods on the "Auction List".
*/
public class Auction {

    //Class variables
    private final HashMap<Lot,Bidder> auctionList = new HashMap<>();//List to store bidders with their lot
    /**
    * This variable stores a specific lot in itself. Actually this variable is used
    * in auction engine class to get the lot when a specific lot name is searched in
    * the auction list.
    */
    private Lot lot ;//Variable to store lot

    /**
    * This method adds/puts a lot against a bidder in the auction list
    * (of type HashMap). If there is a bidder with bidding price more than
    * previous bidding price against a same lot, it will the bidder with the
    * new bidder.
    */
    public void highestValueBidder(Lot lot , Bidder bidder){
        boolean found = false ;//Variable to identify, if there is a bidder with higher price or not
        for (Lot lot1 : auctionList.keySet())//loop to iterate the HashMap
            if (lot1.getLot().equalsIgnoreCase(lot.getLot()))//If there is a lot name already present in auctionList
                if (auctionList.get(lot1).getBid_price() < bidder.getBid_price()) {//If bidding price against the lot is less than new bidding price
                    auctionList.replace(lot1, auctionList.get(lot1), bidder);//It will replace the bidder with new bidder having greater price
                    found = true ;//If the bidder was replaced, there is no need to add the bidder in the list so found becomes true
                }
        if (!found)//If there was no replacement of bidder, it will add in the list
            auctionList.put(lot,bidder);//adding new bidder with the lot
    }

    /**
    * This method will display all the biding and lots in the list.
    * If there is no bidding against a lot it will print no bidding
    * message and if there is a bidding, it will print the identification
    * of the bidder
    */
    public void display(){
        for ( Lot lot : auctionList.keySet() ) {//Loop to iterate the Auction List
            System.out.println("****************************************");
            lot.displayLot();//Displays the lot against the key given by the for loop
            if (auctionList.get(lot).getName() != null) {//If there is bidding on the lot it will print the bidder with highest price
                System.out.println("*************HIGHEST BIDDER*************");
                auctionList.get(lot).display();
            }
            else{//If there is no bidding on the lot, it will print the no bidding message
                System.out.println("****************************************");
                System.out.println("No bidding on this lot.");
            }
            System.out.println("****************************************");
        }
    }

    /**
    * This method was mainly created because of its need for usage in
    * auction engine class. The main function of this method is to search
    * in the list against the LotName provided to it as a parameter.It will
    * also set its lot against that name provided as parameter. If the lot
    * name was found, it will return true otherwise false.If it returns false
    * it will show the lots, in the list, to the user.
    */
    public boolean search(String lotName){
        for(Lot lot : auctionList.keySet())//HashMap iterator loop
            if (lot.getLot().equalsIgnoreCase(lotName)) {//If name was found in the list against the name passed as parameter ignoring the case
                setLot(lot);//It will set the lot against that respective lotName
                return true;//It will return true
            }
        System.out.println("Name not found!");//If lotName passed in parameter was not present in the list, it will print this error
        sleep(3000);//It will call the sleep function defined below in this class to pause the program for 3sec
        clearScreen();//It will clear the console screen. This method in also defined in this class
        System.out.println("Lots are : ");
        displayLots();//It will display all the lots in the auction list. This method is defined below in this class
        return false ;//If name wasn't found, it will return false
    }

    /**
    * It will return lot. Basically it is used in auction
    * Engine class to get lot against the lotName searched
    * in the above function
    */
    public Lot getLot(){
        return lot;//Return the lot variable declared in the class above
    }

    /**
    * This function is called in the search function above
    * to set the lot against the lotName searched
    */
    private void setLot(Lot lot){
        this.lot=lot;//Set the lot as passed in the function
    }

    /**
    * This function displays all the elements in the auction list
    */
    private void displayLots (){
        for (Lot lot : auctionList.keySet()){
            lot.displayLot();
        }
    }

    /**
    * This function clears the screen on the console
    */
    private void clearScreen(){
        try {
            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();//Command to clear the screen
        }catch(Exception e){
            System.out.println("Sorry");
        }
    }

    /**
    * This function pauses the program for the some timePeriod
     * of seconds, as passed in parameter
    */
    public void sleep(int value){
        try{
            Thread.sleep(value);//Main command to pause the program
        }catch (Exception e){
            System.out.println("Sorry");
        }
    }

}
