package View;

import java.awt.Color;
import java.awt.event.KeyEvent;
import java.util.regex.Pattern;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import Controller.BackEnd.UsersClass;
import Controller.BackEnd.DataClass;
import java.util.Arrays;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Abdullah123
 */
@SuppressWarnings("serial")
public class ForgotPassword extends javax.swing.JFrame {
    private int mouseX ;
    private int mouseY ;
    private boolean passwordShow = false;
    private boolean confirmationShow = false;
    private boolean userNameIsCorrect = false;
    private boolean answerIsCorrect = false;
    private boolean passwordIsCorrect = false ;
    private boolean confirmPasswordIsCorrect = false ;
    private double redValue = 255 ;
    private double greenValue = 0 ;
    private UsersClass users;
    private DataClass data;
    private String user="";
    private String []answers=new String[3];
    private String []userAnswers=new String[3];
    private javax.swing.Icon [] answersIcons=new javax.swing.ImageIcon[3];
    /**
     * Creates new form ForgotPassword
     */
    public ForgotPassword(UsersClass users,DataClass data) {
        Arrays.fill(userAnswers, "");
        Arrays.fill(answers, "");
        Arrays.fill(answersIcons, null);
        this.users=users;
        this.data=data;
        LookAndFeel.lookAndFeel("Metal");
        initComponents();
        setVisible(true);
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        ForgotPassworrd = new javax.swing.JPanel();
        PasswordStrength = new javax.swing.JProgressBar();
        ConfirmAll = new javax.swing.JLabel();
        UserNameError = new javax.swing.JLabel();
        PasswordConfrimationError = new javax.swing.JLabel();
        PasswordError = new javax.swing.JLabel();
        AnswerError = new javax.swing.JLabel();
        ConfirmPassword = new javax.swing.JPasswordField();
        Password = new javax.swing.JPasswordField();
        ShowPassword = new javax.swing.JButton();
        ShowConfirmPassword = new javax.swing.JButton();
        OK = new javax.swing.JButton();
        confirmPassword = new javax.swing.JLabel();
        password = new javax.swing.JLabel();
        securityAnswers = new javax.swing.JLabel();
        SecurityAnswers = new javax.swing.JTextField();
        SecurityQuestions = new javax.swing.JComboBox<>();
        Back = new javax.swing.JLabel();
        TopPanel = new javax.swing.JLabel();
        userName = new javax.swing.JTextField();
        UserName = new javax.swing.JLabel();
        Background = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setUndecorated(true);

        ForgotPassworrd.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        PasswordStrength.setBackground(new java.awt.Color(255, 255, 255));
        PasswordStrength.setForeground(new java.awt.Color(255, 0, 0));
        PasswordStrength.setBorder(javax.swing.BorderFactory.createMatteBorder(2, 2, 2, 2, new java.awt.Color(255, 0, 0)));
        ForgotPassworrd.add(PasswordStrength, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 230, 210, 10));
        PasswordStrength.setVisible(false);

        ConfirmAll.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        ConfirmAll.setForeground(new java.awt.Color(255, 153, 153));
        ConfirmAll.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        ConfirmAll.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        ForgotPassworrd.add(ConfirmAll, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 280, 720, 30));

        UserNameError.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        UserNameError.setForeground(new java.awt.Color(51, 255, 255));
        ForgotPassworrd.add(UserNameError, new org.netbeans.lib.awtextra.AbsoluteConstraints(510, 130, 210, 20));

        PasswordConfrimationError.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        PasswordConfrimationError.setForeground(new java.awt.Color(255, 255, 51));
        ForgotPassworrd.add(PasswordConfrimationError, new org.netbeans.lib.awtextra.AbsoluteConstraints(510, 240, 210, 20));

        PasswordError.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        PasswordError.setForeground(new java.awt.Color(255, 255, 51));
        ForgotPassworrd.add(PasswordError, new org.netbeans.lib.awtextra.AbsoluteConstraints(510, 210, 210, 20));

        AnswerError.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        AnswerError.setForeground(new java.awt.Color(255, 0, 0));
        ForgotPassworrd.add(AnswerError, new org.netbeans.lib.awtextra.AbsoluteConstraints(510, 180, 210, 20));

        ConfirmPassword.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        ConfirmPassword.setEchoChar('*');
        ConfirmPassword.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                ConfirmPasswordKeyPressed(evt);
            }
        });
        ForgotPassworrd.add(ConfirmPassword, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 240, 190, 20));

        Password.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        Password.setEchoChar('*');
        Password.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                PasswordKeyPressed(evt);
            }
        });
        ForgotPassworrd.add(Password, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 210, 190, 20));

        ShowPassword.setForeground(new java.awt.Color(255, 255, 255));
        ShowPassword.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/closed eye.png"))); // NOI18N
        ShowPassword.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        ShowPassword.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ShowPasswordMouseClicked(evt);
            }
        });
        ForgotPassworrd.add(ShowPassword, new org.netbeans.lib.awtextra.AbsoluteConstraints(490, 210, 20, 20));

        ShowConfirmPassword.setForeground(new java.awt.Color(255, 255, 255));
        ShowConfirmPassword.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/closed eye.png"))); // NOI18N
        ShowConfirmPassword.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        ShowConfirmPassword.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ShowConfirmPasswordMouseClicked(evt);
            }
        });
        ForgotPassworrd.add(ShowConfirmPassword, new org.netbeans.lib.awtextra.AbsoluteConstraints(490, 240, 20, 20));

        OK.setBackground(new java.awt.Color(0, 153, 153));
        OK.setFont(new java.awt.Font("Segoe Print", 3, 18)); // NOI18N
        OK.setText("OK");
        OK.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.RAISED));
        OK.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        OK.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                OKMouseClicked(evt);
            }
        });
        OK.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                OKActionPerformed(evt);
            }
        });
        ForgotPassworrd.add(OK, new org.netbeans.lib.awtextra.AbsoluteConstraints(330, 340, 110, 30));

        confirmPassword.setFont(new java.awt.Font("Segoe Print", 3, 12)); // NOI18N
        confirmPassword.setForeground(new java.awt.Color(204, 204, 204));
        confirmPassword.setText("CONFIRM PASSWORD ");
        ForgotPassworrd.add(confirmPassword, new org.netbeans.lib.awtextra.AbsoluteConstraints(140, 240, -1, -1));

        password.setFont(new java.awt.Font("Segoe Print", 3, 12)); // NOI18N
        password.setForeground(new java.awt.Color(204, 204, 204));
        password.setText("PASSWORD ");
        ForgotPassworrd.add(password, new org.netbeans.lib.awtextra.AbsoluteConstraints(180, 210, -1, -1));

        securityAnswers.setFont(new java.awt.Font("Segoe Print", 3, 12)); // NOI18N
        securityAnswers.setForeground(new java.awt.Color(204, 204, 204));
        securityAnswers.setText("SECURTIY ANSWERS ");
        ForgotPassworrd.add(securityAnswers, new org.netbeans.lib.awtextra.AbsoluteConstraints(150, 170, -1, -1));

        SecurityAnswers.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        SecurityAnswers.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                SecurityAnswersActionPerformed(evt);
            }
        });
        SecurityAnswers.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                SecurityAnswersKeyPressed(evt);
            }
        });
        ForgotPassworrd.add(SecurityAnswers, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 180, 210, 20));

        SecurityQuestions.setFont(new java.awt.Font("Segoe Print", 3, 9)); // NOI18N
        SecurityQuestions.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "What is your childhood nickname?", "What is your school name?", "In which city, you were borrn?" }));
        SecurityQuestions.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                SecurityQuestionsActionPerformed(evt);
            }
        });
        ForgotPassworrd.add(SecurityQuestions, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 160, 210, 20));

        Back.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/Back arrow.png"))); // NOI18N
        Back.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        Back.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                BackMouseClicked(evt);
            }
        });
        ForgotPassworrd.add(Back, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 40, 40));

        TopPanel.setBackground(new java.awt.Color(0, 102, 102));
        TopPanel.setFont(new java.awt.Font("Segoe Print", 3, 14)); // NOI18N
        TopPanel.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        TopPanel.setText("FORGOT PASSWORD ");
        TopPanel.setCursor(new java.awt.Cursor(java.awt.Cursor.CROSSHAIR_CURSOR));
        TopPanel.setOpaque(true);
        TopPanel.addMouseMotionListener(new java.awt.event.MouseMotionAdapter() {
            public void mouseDragged(java.awt.event.MouseEvent evt) {
                TopPanelMouseDragged(evt);
            }
        });
        TopPanel.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                TopPanelMousePressed(evt);
            }
        });
        ForgotPassworrd.add(TopPanel, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 720, 40));

        userName.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        userName.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                userNameKeyPressed(evt);
            }
        });
        ForgotPassworrd.add(userName, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 130, 210, 20));

        UserName.setFont(new java.awt.Font("Segoe Print", 3, 12)); // NOI18N
        UserName.setForeground(new java.awt.Color(204, 204, 204));
        UserName.setText("USERNAME  ");
        ForgotPassworrd.add(UserName, new org.netbeans.lib.awtextra.AbsoluteConstraints(180, 130, -1, -1));

        Background.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/login-bg.jpg"))); // NOI18N
        Background.setBorder(javax.swing.BorderFactory.createMatteBorder(5, 5, 5, 5, new java.awt.Color(0, 102, 102)));
        ForgotPassworrd.add(Background, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, -1, -1));

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(ForgotPassworrd, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(ForgotPassworrd, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void BackMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BackMouseClicked
        this.dispose();
        new Signin(users,data);
    }//GEN-LAST:event_BackMouseClicked

    private void TopPanelMouseDragged(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_TopPanelMouseDragged
        int XCoordinate=evt.getXOnScreen();
        int YCoordinate=evt.getYOnScreen();
        this.setLocation(XCoordinate-mouseX,YCoordinate-mouseY);
    }//GEN-LAST:event_TopPanelMouseDragged

    private void TopPanelMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_TopPanelMousePressed
        mouseX=evt.getX();
        mouseY=evt.getY();
    }//GEN-LAST:event_TopPanelMousePressed

    private void OKMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_OKMouseClicked
        for(String ans:userAnswers)
            if(ans.isBlank())
                answerIsCorrect=false;
        if(!userNameIsCorrect){
            ConfirmAll.setText("*Please correct username!");
        }
        else if(!answerIsCorrect||userAnswers.length<3)
            ConfirmAll.setText("*Please correct security answers!");
        else if(!passwordIsCorrect)
            ConfirmAll.setText("*Please correct password!");
        else if(!confirmPasswordIsCorrect)
            ConfirmAll.setText("*Please correct password confirmation field!!");
        else{
            this.dispose();
            new Signin(users,data);
        }
    }//GEN-LAST:event_OKMouseClicked

    private void ShowPasswordMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ShowPasswordMouseClicked
        passwordShow=hidePassword(passwordShow,ShowPassword,Password);
    }//GEN-LAST:event_ShowPasswordMouseClicked

    private void ShowConfirmPasswordMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ShowConfirmPasswordMouseClicked
        confirmationShow=hidePassword(confirmationShow,ShowConfirmPassword,ConfirmPassword);
    }//GEN-LAST:event_ShowConfirmPasswordMouseClicked

    private void userNameKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_userNameKeyPressed
        if(keyCheck(evt)){
            setToInitials(1);
            userNameIsCorrect=JTextFieldFormat(true,userName,evt,"",UserNameError,SecurityAnswers,1,"Incorrect User Name!",false,true);
        }
    }//GEN-LAST:event_userNameKeyPressed

    private void SecurityAnswersKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_SecurityAnswersKeyPressed
        if(keyCheck(evt)){
            setToInitials(2);
            answerIsCorrect=JTextFieldFormat(userNameIsCorrect,SecurityAnswers,evt,answers[SecurityQuestions.getSelectedIndex()],AnswerError,Password,2,"No matching answer",false,false);
       }
    }//GEN-LAST:event_SecurityAnswersKeyPressed

    private void PasswordKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_PasswordKeyPressed
        PasswordStrength.setVisible(true);
        for(String ans:userAnswers){
            if(ans.isBlank()){
                answerIsCorrect=false;
            }
        }
        if(keyCheck(evt)){
            setToInitials(3);
            passwordIsCorrect=JTextFieldFormat(answerIsCorrect,Password,evt,null,PasswordError,ConfirmPassword,3,"",true,false);
        }
    }//GEN-LAST:event_PasswordKeyPressed

    @SuppressWarnings("deprecation")
    private void ConfirmPasswordKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_ConfirmPasswordKeyPressed
        if(keyCheck(evt)){
            setToInitials(4);
            confirmPasswordIsCorrect=JTextFieldFormat(passwordIsCorrect,ConfirmPassword,evt,Password.getText(),PasswordConfrimationError,null,4,"No password match!",false,false);
        }
    }//GEN-LAST:event_ConfirmPasswordKeyPressed

    private void SecurityQuestionsActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_SecurityQuestionsActionPerformed
        SecurityAnswers.setText(userAnswers[SecurityQuestions.getSelectedIndex()]);
        AnswerError.setIcon(answersIcons[SecurityQuestions.getSelectedIndex()]);
    }//GEN-LAST:event_SecurityQuestionsActionPerformed

    private void SecurityAnswersActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_SecurityAnswersActionPerformed
        if(!SecurityAnswers.getText().isBlank()){
            userAnswers[SecurityQuestions.getSelectedIndex()]=SecurityAnswers.getText();
            answersIcons[SecurityQuestions.getSelectedIndex()]=AnswerError.getIcon();
        }
    }//GEN-LAST:event_SecurityAnswersActionPerformed

    private void OKActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_OKActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_OKActionPerformed
    
    private boolean keyCheck(java.awt.event.KeyEvent evt){
        if((evt.getKeyCode()>=44&&evt.getKeyCode()<=57)||(evt.getKeyCode()==59)||(evt.getKeyCode()>=65&&evt.getKeyCode()<=93)||(evt.getKeyCode()>=96&&evt.getKeyCode()<=107)||evt.getKeyCode()==192||evt.getKeyCode()==127||evt.getKeyCode()==222||evt.getKeyCode()==8){
            if(!evt.isAltDown()&&!evt.isActionKey())
                return true ;
            else
                return false;
        }
        else
            return false;
    }
    
    private boolean JTextFieldFormat(boolean previousIsCorrect,JTextField textField,KeyEvent evt,String compareTo,JLabel errorField,JTextField enableAField,int fieldNo,String error,boolean isPasswordField,boolean isUserName){
        boolean fieldIsCorrect=false;
        if(previousIsCorrect){
            String text ;
            if(!evt.isControlDown())
                text= textField.getText()+evt.getKeyChar();           
            else
                text=textField.getText();
            if(!textField.getText().isBlank())
                if(evt.getKeyCode()==8){
                    char[]array=text.toCharArray ();
                    char []replaced= new char[array.length-2];
                    System.arraycopy ( array , 0 , replaced , 0 , array.length - 2 );
                    text= new String ( replaced );
                }
            int strength=0;
            if(isPasswordField){
                strength= passwordStrength(text);
            }
            if(!isPasswordField?(isUserName?users.getLogin().containsKey(text):text.equals (compareTo)):strength+text.length()>=68){
                errorField.setText("");
                errorField.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/tick.png")));
                fieldIsCorrect=true;
                if(isUserName){
                    user=text;
                    answers=users.getSecurityAnswers().get(user).toString().split(",");
                }
            }
            else if(text.isBlank()){
                errorField.setIcon(null);
                errorField.setText("");
                fieldIsCorrect=false;
            }
            else {
                errorField.setIcon(null);
                if(!isPasswordField)
                    errorField.setText("*"+error);
                else
                    ConfirmAll.setText("*Combine upper case,number and special character!");
                fieldIsCorrect=false;
            }
            if(enableAField!=null)
                if(!enableAField.isEnabled())
                    enableAField.setEnabled(true);
            if(isPasswordField){
                double percentage = (strength*0.1/20)+text.length();
                redValue=clampValue(0,255,((redValue*100/255)-percentage)*255/100);
                greenValue=clampValue(0,255,((greenValue*100/255)+percentage)*255/100);
                PasswordStrength.setValue(strength+text.length());
                PasswordStrength.setForeground(new Color((int)redValue,(int)greenValue,0));
                PasswordStrength.setBorder(javax.swing.BorderFactory.createMatteBorder(2, 2, 2, 2, new Color((int)redValue,(int)greenValue,0)));
            }
        }
        else
            if(fieldNo!=1){
                textField.setEnabled(false);
                errorField.setText("*Correct above field!"); 
            }
        return fieldIsCorrect;
    }

    @SuppressWarnings("fallthrough")
    private void setToInitials(int value){
    switch(value){
        case 1:
            SecurityAnswers.setText("");
            AnswerError.setIcon(null);
            AnswerError.setText("");
            answerIsCorrect=false;
            break;
        case 3:
            AnswerError.setText("");
            break;
        case 4:
            AnswerError.setText("");
            PasswordError.setText("");
            break;
    }
    switch(value){
        case 2:
        case 3:
        case 4:
            UserNameError.setText("");
            break;
    }
    switch(value){
        case 1:
        case 2:
            Password.setText("");
            PasswordError.setText("");
            PasswordError.setIcon(null);
            passwordIsCorrect=false;
        case 3:
            ConfirmPassword.setText("");
            PasswordConfrimationError.setText("");
            PasswordConfrimationError.setIcon(null);
            confirmPasswordIsCorrect=false;
            break;
    }
    switch(value){
        case 1:
        case 2:
        case 4:
            redValue=255;
            greenValue=0;
            PasswordStrength.setForeground(new Color((int)redValue,(int)greenValue,0));
            PasswordStrength.setValue(0);
            PasswordStrength.setVisible(false);
    }
    ConfirmAll.setText("");
}

private boolean hidePassword(boolean show,JButton showButton,JPasswordField passwordField){
    show=!show;
    if(!show){
        showButton.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/closed eye.png")));
        passwordField.setEchoChar('*');
    }
    else{
        showButton.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/eye.png")));
        passwordField.setEchoChar((char)0);
    }
    return show;
}

private double clampValue(double min,double max,double variable){
    if(variable>=max)
        variable=max;
    else if(variable<=min)
        variable=min;
    return variable;
}

private int passwordStrength(String text){
    int MeasureStrength=0;
    Pattern upperCase = Pattern.compile("[A-Z ]", Pattern.CASE_INSENSITIVE);
    Pattern number = Pattern.compile("[0-9 ]", Pattern.CASE_INSENSITIVE);
    Pattern specialCharacter = Pattern.compile("[`~!@#$%&*()_\\-\\^\\+=\\[\\]|;:'/?.>,< ]", Pattern.CASE_INSENSITIVE);
    if(upperCase.matcher(text).find()){
        MeasureStrength++;
    }
    if(number.matcher(text).find()){
        MeasureStrength++;
    }
    if(specialCharacter.matcher(text).find()){
        MeasureStrength++;
    }
    return MeasureStrength*20;
}

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel AnswerError;
    private javax.swing.JLabel Back;
    private javax.swing.JLabel Background;
    private javax.swing.JLabel ConfirmAll;
    private javax.swing.JPasswordField ConfirmPassword;
    private javax.swing.JPanel ForgotPassworrd;
    private javax.swing.JButton OK;
    private javax.swing.JPasswordField Password;
    private javax.swing.JLabel PasswordConfrimationError;
    private javax.swing.JLabel PasswordError;
    private javax.swing.JProgressBar PasswordStrength;
    private javax.swing.JTextField SecurityAnswers;
    private javax.swing.JComboBox<String> SecurityQuestions;
    private javax.swing.JButton ShowConfirmPassword;
    private javax.swing.JButton ShowPassword;
    private javax.swing.JLabel TopPanel;
    private javax.swing.JLabel UserName;
    private javax.swing.JLabel UserNameError;
    private javax.swing.JLabel confirmPassword;
    private javax.swing.JLabel password;
    private javax.swing.JLabel securityAnswers;
    private javax.swing.JTextField userName;
    // End of variables declaration//GEN-END:variables
}
