import java.time.*;// import java.time pacakage


public class date{
	
	public static void main (String [] args)
	{
	// to create object of present date
	LocalDate initialDate = LocalDate.now();
	System.out.println(initialDate);
// to add days in date
	LocalDate finaldate = initialDate.plus(Period.ofDays(15));
	System.out.println(finaldate);
	
// to subtract days	
	finaldate= finaldate.minus(Period.ofDays(15));
	System.out.println(finaldate);
	
// to get the difference of two dates
	finaldate= finaldate.plus(Period.ofDays(10));
	System.out.println(finaldate);
	
	int totaldays=Period.between(initialDate,finaldate).getDays();
	
	System.out.println("Total days are : "+ totaldays);


	//to get months

	finaldate= finaldate.plus(Period.ofDays(20));
	System.out.println(finaldate);
	
	totaldays=Period.between(initialDate,finaldate).getMonths();
	
	System.out.println("Total days are : "+ totaldays);
	System.out.println("Total Months are : "+ totaldays);

	
	
	}
}