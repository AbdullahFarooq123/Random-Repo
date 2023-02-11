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
public class Lecture implements Serializable{
    private final String Semester;
    private final String Section;
    public Lecture(String Semester,String Section){
        this.Semester=Semester;
        this.Section=Section;
    }
    public String getSemester(){
        return Semester;
    }
    public String getSection(){
        return Section;
    }
}
