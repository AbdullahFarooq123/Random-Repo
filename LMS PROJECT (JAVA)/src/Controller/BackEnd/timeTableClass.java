/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller.BackEnd;
import java.io.Serializable;

/**
 *
 * @author Abdullah123
 */
@SuppressWarnings("serial")
public class timeTableClass implements Serializable{
    private String Day;
    private String Time;
    private String Room;
    private SubjectClass Subject;
    public timeTableClass(String Day,String Time,String Room,SubjectClass Subject){
        this.Day=Day;
        this.Time=Time;
        this.Room=Room;
        this.Subject=Subject;
    }
    
    public String getDay(){
        return Day;
    }
    
    public String getTime(){
        return Time;
    }
    
    public String getRoom(){
        return Room;
    }
    
    public SubjectClass getSubject(){
        return Subject;
    }
}
