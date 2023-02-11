package Controller.BackEnd;

import java.util.ArrayList;
import java.util.HashMap;

@SuppressWarnings("serial")
public class TeacherClass extends UsersClass {
    private final HashMap < timeTableClass, ArrayList<String> > classes = new HashMap <> ( );

    public TeacherClass ( String jobStatus , String name , String Cnic , DataClass data ) {
        super ( name , Cnic , jobStatus , data );
    }

    public HashMap < timeTableClass, ArrayList<String> > getClasses ( ) {
        return classes;
    }

    public void setClasses ( timeTableClass table , ArrayList<String>Students ) {
        ArrayList<String>tempStudents=classes.get ( table );
        if(tempStudents==null){
            tempStudents=new ArrayList <> (  );
        }
        if(Students==null){
            Students=new ArrayList<>();
        }
        for(String names : Students){
            tempStudents.add(names);
        }
        classes.put(table , tempStudents );
    }
}
