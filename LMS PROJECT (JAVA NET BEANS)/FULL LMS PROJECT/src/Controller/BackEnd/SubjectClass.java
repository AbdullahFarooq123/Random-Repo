package Controller.BackEnd;

import java.io.*;

@SuppressWarnings("serial")
public class SubjectClass implements Serializable {
    private String subjectName;
    private AttendanceClass attendance;
    private Lecture userClass;
    private double Marks;

    public SubjectClass ( String subjectName , AttendanceClass attendance , Lecture userClass) {
        this.subjectName = subjectName;
        this.attendance=attendance;
        this.userClass=userClass;
        this.Marks=0.0;
    }

    public String getSubjectName ( ) {
        return subjectName;
    }
    
    public AttendanceClass getAttendance(){
        return attendance;
    }
    
    public Lecture getUserClass(){
        return userClass;
    }
    
    public void setMarks(Double Marks){
        this.Marks=Marks;
    }
    
    public double getMarks(){
        return Marks;
    }

}
