import java.io.File;// to create a file
import java.io.FileWriter;// to write a file
import java.util.Scanner;// to reaad a file

public class filehandling
{
	
	public static void main(String args[]){
	
	try{
		File fileobj= new File ("sectionB.txt");
		
		if(fileobj.createNewFile())
				System.out.print("File Created");
		else
			System.out.println("file Already Exsist");
	
		FileWriter pen= new FileWriter(fileobj);
		pen.write("\nfile is in append mode" );
		pen.write("\nSection B \n hello" );
		pen.close();
		
		Scanner fileReader= new Scanner(fileobj);
		
		while(fileReader.hasNextLine()){
			System.out.println(fileReader.nextLine());
		}
	
	
	
	
	
	
	
	
	}
	catch(Exception e){}
}}