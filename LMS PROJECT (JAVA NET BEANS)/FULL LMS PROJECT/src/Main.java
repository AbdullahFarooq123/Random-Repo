

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Abdullah123
 */
import View.Menu;
import Controller.BackEnd.DataClass;
import Controller.BackEnd.UsersClass;
public class Main {
    public static void main(String []args){
        DataClass data = new DataClass();
        new Menu(new UsersClass(data),data);
    }
}
