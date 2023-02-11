package View;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Abdullah123
 */
import java.awt.event.*;
import javax.swing.*;
import Controller.BackEnd.*;
@SuppressWarnings("serial")
public class Signin extends javax.swing.JFrame {
    private int mouseX ;
    private int mouseY ;
    private Boolean show =false;
    private Boolean passwordIsCorrect = false ;
    private Boolean userNameIsCorrect = false ;
    private UsersClass users ;
    private DataClass data ;
    private String user="";
    /**
     * Creates new form SignIn
     */
    public Signin(UsersClass users,DataClass data) {
        this.users=users;
        this.data=data;
        LookAndFeel.lookAndFeel("Nimbus");
        initComponents();
        this.setVisible(true);
    }
    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        SigninConfirmation = new javax.swing.JLabel();
        ShowPassword = new javax.swing.JButton();
        PasswordError = new javax.swing.JLabel();
        UserNameError = new javax.swing.JLabel();
        Back = new javax.swing.JLabel();
        TopPanel = new javax.swing.JLabel();
        userName = new javax.swing.JTextField();
        password = new javax.swing.JPasswordField();
        UserName = new javax.swing.JLabel();
        Password = new javax.swing.JLabel();
        ForgotPassword = new javax.swing.JLabel();
        Signin = new javax.swing.JButton();
        BackGround = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setUndecorated(true);

        jPanel1.setBorder(javax.swing.BorderFactory.createMatteBorder(1, 1, 1, 1, new java.awt.Color(0, 102, 102)));
        jPanel1.setForeground(new java.awt.Color(255, 255, 255));
        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        SigninConfirmation.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        SigninConfirmation.setForeground(new java.awt.Color(255, 51, 51));
        SigninConfirmation.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jPanel1.add(SigninConfirmation, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 230, 710, 30));

        ShowPassword.setForeground(new java.awt.Color(255, 255, 255));
        ShowPassword.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/closed eye.png"))); // NOI18N
        ShowPassword.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        ShowPassword.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                ShowPasswordMouseClicked(evt);
            }
        });
        jPanel1.add(ShowPassword, new org.netbeans.lib.awtextra.AbsoluteConstraints(460, 160, 20, 20));

        PasswordError.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        PasswordError.setForeground(new java.awt.Color(255, 0, 0));
        jPanel1.add(PasswordError, new org.netbeans.lib.awtextra.AbsoluteConstraints(480, 160, 230, 20));

        UserNameError.setBackground(new java.awt.Color(255, 0, 0));
        UserNameError.setFont(new java.awt.Font("Segoe Print", 2, 11)); // NOI18N
        UserNameError.setForeground(new java.awt.Color(255, 0, 0));
        jPanel1.add(UserNameError, new org.netbeans.lib.awtextra.AbsoluteConstraints(480, 120, 230, 20));

        Back.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/Back arrow.png"))); // NOI18N
        Back.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        Back.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                BackMousePressed(evt);
            }
        });
        jPanel1.add(Back, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 50, 40));

        TopPanel.setBackground(new java.awt.Color(0, 102, 102));
        TopPanel.setFont(new java.awt.Font("Segoe Print", 3, 18)); // NOI18N
        TopPanel.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        TopPanel.setText("SIGNIN ");
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
        jPanel1.add(TopPanel, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 710, 40));

        userName.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        userName.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                userNameKeyPressed(evt);
            }
        });
        jPanel1.add(userName, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 120, 210, 20));

        password.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        password.setEchoChar('*');
        password.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                passwordKeyPressed(evt);
            }
        });
        jPanel1.add(password, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 160, 190, 20));

        UserName.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        UserName.setText("USERNAME ");
        jPanel1.add(UserName, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 120, -1, -1));

        Password.setFont(new java.awt.Font("Segoe Print", 3, 11)); // NOI18N
        Password.setText("PASSWORD ");
        jPanel1.add(Password, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 160, -1, -1));

        ForgotPassword.setFont(new java.awt.Font("Tahoma", 0, 10)); // NOI18N
        ForgotPassword.setText("<HTML><U>FORGOT PASSWORD?</U></HTML>");
        ForgotPassword.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        ForgotPassword.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                ForgotPasswordMousePressed(evt);
            }
        });
        jPanel1.add(ForgotPassword, new org.netbeans.lib.awtextra.AbsoluteConstraints(400, 200, -1, 14));

        Signin.setBackground(new java.awt.Color(0, 102, 102));
        Signin.setFont(new java.awt.Font("Segoe Print", 3, 15)); // NOI18N
        Signin.setText("SIGNIN ");
        Signin.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.RAISED));
        Signin.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        Signin.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                SigninMouseClicked(evt);
            }
        });
        jPanel1.add(Signin, new org.netbeans.lib.awtextra.AbsoluteConstraints(320, 290, -1, -1));

        BackGround.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/Solid colour back.jpg"))); // NOI18N
        BackGround.setBorder(javax.swing.BorderFactory.createMatteBorder(3, 3, 3, 3, new java.awt.Color(0, 51, 51)));
        BackGround.setDisabledIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/quit.png"))); // NOI18N
        jPanel1.add(BackGround, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 710, 380));

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void ForgotPasswordMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ForgotPasswordMousePressed
        this.dispose();
        new ForgotPassword(users,data);
    }//GEN-LAST:event_ForgotPasswordMousePressed

    private void TopPanelMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_TopPanelMousePressed
         mouseX=evt.getX();
        mouseY=evt.getY();
    }//GEN-LAST:event_TopPanelMousePressed

    private void TopPanelMouseDragged(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_TopPanelMouseDragged
        int XCoordinate=evt.getXOnScreen();
        int YCoordinate=evt.getYOnScreen();
        this.setLocation(XCoordinate-mouseX,YCoordinate-mouseY);
    }//GEN-LAST:event_TopPanelMouseDragged

    private void BackMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_BackMousePressed
        this.dispose();
        new Menu(users,data);
    }//GEN-LAST:event_BackMousePressed

    private void userNameKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_userNameKeyPressed
        if(keyCheck(evt)){
            setToInitials(1);
            userNameIsCorrect=JTextFieldFormat(true,userName,evt,UserNameError,password,0,"Username not found!",true);
        }
    }//GEN-LAST:event_userNameKeyPressed

    private void SigninMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_SigninMouseClicked

        if(!userNameIsCorrect){
            SigninConfirmation.setText("*Please correct username!");
        }
        else if(!passwordIsCorrect){
            SigninConfirmation.setText("*Please correct password!");
        }
        else{
            this.dispose();
            if(users.getUser(user).getJobStatus().equals("Management")){
                new Management(users,data,user);
            }
            else if (users.getUser(user).getJobStatus().equals("Teacher")){
                new Teacher(users,data,user);
            }
            /*else if(users.getUser(user).getJobStatus().equals("Student")){
                new Student
            }*/
            SigninConfirmation.setText("");
        }
    }//GEN-LAST:event_SigninMouseClicked

    private void passwordKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_passwordKeyPressed
            if(keyCheck(evt)){
                setToInitials(2);
                passwordIsCorrect=JTextFieldFormat(userNameIsCorrect,password,evt,PasswordError,null,1,"Password not found!",false);              
        }         
    }//GEN-LAST:event_passwordKeyPressed

    private void ShowPasswordMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_ShowPasswordMouseClicked
        show=passwordShow(show,ShowPassword,password);
    }//GEN-LAST:event_ShowPasswordMouseClicked

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
private boolean JTextFieldFormat(boolean previousIsCorrect,JTextField textField,KeyEvent evt,JLabel errorField,JTextField enableAField,int fieldNo,String error,boolean isUserName){
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
        
        if(isUserName?users.getLogin().containsKey(text):text.equals (users.getLogin().get(user))){
            errorField.setText("");
            errorField.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/tick.png")));
            fieldIsCorrect=true;
            if(isUserName){
                user=text;
            }
        }
        else if(text.isBlank()){
            errorField.setIcon(null);
            errorField.setText("");
            fieldIsCorrect=false;
        }
        else {
            errorField.setIcon(null);
            errorField.setText("*"+error);
            fieldIsCorrect=false;
        }
        if(enableAField!=null)
            if(!enableAField.isEnabled())
                enableAField.setEnabled(true);
    }
    else
        if(fieldNo!=0){
            textField.setEnabled(false);
            errorField.setText("*Correct above field!"); 
        }
    return fieldIsCorrect;
}

private void setToInitials(int value){
    if(value==1){
        password.setText("");
        PasswordError.setIcon(null);
        PasswordError.setText("");
        passwordIsCorrect=false;
    }
    else{
        UserNameError.setText("");
    }     
    SigninConfirmation.setText("");
}

private boolean passwordShow(boolean show,JButton showButton,JPasswordField passwordField){
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

private boolean containsValue(String value,String []values){
    for(String val:values){
        if(value.equals(val))
            return true;
    }
    return false;
}

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel Back;
    private javax.swing.JLabel BackGround;
    private javax.swing.JLabel ForgotPassword;
    private javax.swing.JLabel Password;
    private javax.swing.JLabel PasswordError;
    private javax.swing.JButton ShowPassword;
    private javax.swing.JButton Signin;
    private javax.swing.JLabel SigninConfirmation;
    private javax.swing.JLabel TopPanel;
    private javax.swing.JLabel UserName;
    private javax.swing.JLabel UserNameError;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPasswordField password;
    private javax.swing.JTextField userName;
    // End of variables declaration//GEN-END:variables
}
