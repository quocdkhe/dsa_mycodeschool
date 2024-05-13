/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package singlylinkedlist;
import java.util.List;
import java.util.ArrayList;
/**
 *
 * @author dkien
 */
public class LinkedList extends LinkedListCore{
    // This class will contain some more function.
    /*
    * a. Xoa phan tu thu 3  
    * b. Xoa 2 phan tu nguyen to dau tien (cuoi cung)
    * c. Xoa tat ca cac phan tu nguyen to( chan, le)
    */
    public boolean isPrime(int num){
        for(int i = 2; i <= Math.sqrt(num); i++){
            if(num%i == 0){
                return false;
            }
        }
        return (num >= 2);
    }
    
    public void deleteTwoPrime(){
        Node temp = head;
        List<Integer> prime = new ArrayList<>();
        while(temp != null){
            if(isPrime(temp.data))
                prime.add(temp.data);
            temp = temp.next;
        }
        if(prime.size() < 2)
            return;
        
        this.deleteData(prime.get(prime.size() - 1));
        this.deleteData(prime.get(prime.size() - 2));
    }
    
    public void deleteAllEven(){
        Node temp = head;
        while(temp != null){
            if(temp.data%2 == 0){
                super.deleteData(temp.data);
            }
            temp = temp.next;
        }
    }
    
    
}
