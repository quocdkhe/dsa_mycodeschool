/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package singlylinkedlist;

/**
 *
 * @author dkien
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.addLast(3);
        list.addLast(2);
        list.addLast(5);
        list.addLast(7);
        list.addLast(11);
        list.addLast(12);
        list.addLast(13);
        list.traverse();
        list.deleteTwoPrime();
        list.traverse();
    }
    
}
