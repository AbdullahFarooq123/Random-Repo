/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package View;

import javax.swing.JRadioButton;

/**
 *
 * @author Abdullah123
 */
public class Question {
    private String questionType;
    private String question;
    private int questionMarks;
    private int options;
    private JRadioButton option;
    public Question(String questionType,String question,int questionMarks,int options,JRadioButton option){
        this.questionType=questionType;
        this.question=question;
        this.questionMarks=questionMarks;
        this.options=options;
        this.option=option;
    }
    public Question(String questionType,String question,int questionMarks){
        this.questionType=questionType;
        this.question=question;
        this.questionMarks=questionMarks;
    }
    public String getQuestionType(){
        return questionType;
    }
    public String getQuestion(){
        return question;
    }
    public int getQuestionMarks(){
        return questionMarks;
    }
    public int getOptions(){
        return options;
    }
    public JRadioButton getOption(){
        return option;
    }
}
