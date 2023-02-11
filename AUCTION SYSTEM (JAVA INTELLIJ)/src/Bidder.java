/**
* This class will store the bidder's data. The data includes
* Name, CNIC and the bidding price of the bidder.
*/
public class Bidder {
    //Class variables
    private final String Name ;//to store name of bidder
    private final String CNIC ;//to store CNIC of bidder
    private final int bid_price ;//to store the bidding price of the bidder

    /**
     * Constructor to set the values of the class variables
     * It takes values as parameters and sets the class variables
     */
    public Bidder(String Name, String CNIC, int bid_price){//Constructor with parameters
        this.Name=Name;
        this.CNIC=CNIC;
        this.bid_price=bid_price;
    }

    //Getter Methods

    public String getName() {//To get the name of the bidder
        return Name;
    }

    public String getCNIC() {//To get CNIC of the bidder
        return CNIC;
    }

    public int getBid_price() {//To get bid pricing of the bidder
        return bid_price;
    }

    //Other methods

    public void display(){//To display all the class variables/attributes of the bidder class
        System.out.println("The name of bidder is : " + getName());
        System.out.println("The CNIC of bidder is : " + getCNIC());
        System.out.println("The Bid price of bidder is : " + getBid_price() + " Rs.");
    }
}
