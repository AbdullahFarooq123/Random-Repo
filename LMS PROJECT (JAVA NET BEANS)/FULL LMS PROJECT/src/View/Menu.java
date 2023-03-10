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
import Controller.BackEnd.*;
import javax.swing.JOptionPane;
@SuppressWarnings("serial")
public class Menu extends javax.swing.JFrame {
    private int mouseX ;
    private int mouseY ;
    DataClass data;
    private UsersClass users;

    /**
     * Creates new form NewJFrame
     */
    public Menu(UsersClass users,DataClass data) {
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
        Welcome = new javax.swing.JLabel();
        SIGNUP = new javax.swing.JButton();
        SIGNIN = new javax.swing.JButton();
        Quit = new javax.swing.JLabel();
        TopPanel = new javax.swing.JLabel();
        Background = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setUndecorated(true);

        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        Welcome.setBackground(new java.awt.Color(0, 0, 0));
        Welcome.setFont(new java.awt.Font("Segoe Script", 3, 48)); // NOI18N
        Welcome.setForeground(new java.awt.Color(255, 255, 102));
        Welcome.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        Welcome.setText("WELCOME TO LMS ");
        Welcome.setBorder(javax.swing.BorderFactory.createMatteBorder(5, 5, 5, 5, new java.awt.Color(255, 255, 0)));
        Welcome.setOpaque(true);
        jPanel1.add(Welcome, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 60, 540, -1));

        SIGNUP.setBackground(new java.awt.Color(0, 102, 102));
        SIGNUP.setFont(new java.awt.Font("Segoe Print", 3, 24)); // NOI18N
        SIGNUP.setText("SIGNUP ");
        SIGNUP.setBorder(javax.swing.BorderFactory.createCompoundBorder(javax.swing.BorderFactory.createEtchedBorder(), javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0))));
        SIGNUP.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        SIGNUP.setDebugGraphicsOptions(javax.swing.DebugGraphics.NONE_OPTION);
        SIGNUP.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                SIGNUPActionPerformed(evt);
            }
        });
        jPanel1.add(SIGNUP, new org.netbeans.lib.awtextra.AbsoluteConstraints(290, 270, 120, 50));

        SIGNIN.setBackground(new java.awt.Color(0, 102, 102));
        SIGNIN.setFont(new java.awt.Font("Segoe Print", 3, 24)); // NOI18N
        SIGNIN.setText("SIGNIN ");
        SIGNIN.setBorder(javax.swing.BorderFactory.createCompoundBorder(javax.swing.BorderFactory.createEtchedBorder(), javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0))));
        SIGNIN.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        SIGNIN.setDebugGraphicsOptions(javax.swing.DebugGraphics.NONE_OPTION);
        SIGNIN.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                SIGNINActionPerformed(evt);
            }
        });
        jPanel1.add(SIGNIN, new org.netbeans.lib.awtextra.AbsoluteConstraints(290, 200, 120, 50));

        Quit.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/quit.png"))); // NOI18N
        Quit.setText("jLabel1");
        Quit.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        Quit.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                QuitMouseClicked(evt);
            }
        });
        jPanel1.add(Quit, new org.netbeans.lib.awtextra.AbsoluteConstraints(670, 0, 40, 40));

        TopPanel.setBackground(new java.awt.Color(0, 51, 51));
        TopPanel.setFont(new java.awt.Font("Segoe Print", 3, 24)); // NOI18N
        TopPanel.setForeground(new java.awt.Color(0, 204, 102));
        TopPanel.setText("MENU ");
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

        Background.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Images/photo-1507842217343-583bb7270b66.jpg"))); // NOI18N
        Background.setText("jLabel1");
        Background.setBorder(javax.swing.BorderFactory.createMatteBorder(5, 5, 5, 5, new java.awt.Color(0, 51, 51)));
        jPanel1.add(Background, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 710, 400));

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void SIGNINActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_SIGNINActionPerformed
        if(users.getUsers().size()!=0){
        this.dispose();
        new Signin(users,data);
        }
        else
            JOptionPane.showMessageDialog(this, "No accounts!Please SignUp first");
    }//GEN-LAST:event_SIGNINActionPerformed

    private void SIGNUPActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_SIGNUPActionPerformed
        this.dispose();
        new SignUp(users,data);
    }//GEN-LAST:event_SIGNUPActionPerformed

    private void QuitMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_QuitMouseClicked
        users.storeUserDetails();
        System.exit(1);
    }//GEN-LAST:event_QuitMouseClicked

    private void TopPanelMouseDragged(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_TopPanelMouseDragged
        int XCoordinate=evt.getXOnScreen();
        int YCoordinate=evt.getYOnScreen();
        this.setLocation(XCoordinate-mouseX,YCoordinate-mouseY);
    }//GEN-LAST:event_TopPanelMouseDragged

    private void TopPanelMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_TopPanelMousePressed
        mouseX=evt.getX();
        mouseY=evt.getY();
    }//GEN-LAST:event_TopPanelMousePressed

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel Background;
    private javax.swing.JLabel Quit;
    private javax.swing.JButton SIGNIN;
    private javax.swing.JButton SIGNUP;
    private javax.swing.JLabel TopPanel;
    private javax.swing.JLabel Welcome;
    private javax.swing.JPanel jPanel1;
    // End of variables declaration//GEN-END:variables
}
