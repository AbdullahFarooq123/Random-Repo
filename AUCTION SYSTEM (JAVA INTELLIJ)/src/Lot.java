/**
* This class will store all the description about the lot
*/
public class Lot {
    //Class variables
    private final String Lot ;//To store the name of the lot
    private final String Description;//To store the description about the lot

    /**
     * Constructor to set the values of the class variables
     * It takes values as parameters and sets the class variables
     */
    public Lot (String Lot , String Description ){//Constructor with parameters
        this.Lot=Lot;
        this.Description=Description;
    }

    //Getter methods
    public String getLot() {//Method to get the name of the lot
        return Lot;
    }

    public String getDescription() {//Method to get the description about the lot
        return Description;
    }

    //Other methods
    public void displayLot(){//Method to display all the class variables/attributes of the Lot class
        System.out.println("The lot name is : " + getLot());
        System.out.println("The lot description is : " + getDescription());
    }
}
