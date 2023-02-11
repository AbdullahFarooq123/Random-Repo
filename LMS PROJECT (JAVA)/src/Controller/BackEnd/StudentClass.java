package Controller.BackEnd;

import java.util.ArrayList;

@SuppressWarnings("serial")
public class StudentClass extends UsersClass {
    private ArrayList<timeTableClass>studentTimeTable=new ArrayList<>();
    private String rollNumber=null;

    public StudentClass ( String jobStatus , String name , String Cnic , DataClass data ) {
        super ( name , Cnic , jobStatus , data );

    }

    public void addTimeTable(timeTableClass timeClass){
        studentTimeTable.add(timeClass);
    }
    
    public ArrayList<timeTableClass> getStudentTimeTable(){
        return studentTimeTable;
    }
    
    public void setRollNo(String rollNumber ){
        this.rollNumber=rollNumber;
    }
    
    public String getRollNo(){
        return rollNumber;
    }
    
}
