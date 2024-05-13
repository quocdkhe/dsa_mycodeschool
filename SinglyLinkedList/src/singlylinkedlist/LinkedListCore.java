/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package singlylinkedlist;

/**
 *
 * @author dkien
 */
public class LinkedListCore { 
    // This class provides some basic function in a singly linked list
    public Node head, tail;
    public int size;
    public LinkedListCore(){
        this.head = null;
        this.tail = null;
        this.size = 0;
    }
    
    public int getSize(){
        return size;
    }
    
    public void traverse(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println("");
    }
    
    public void addLast(int data){ // Append to the end of the list
        Node node = new Node(data);
        if(head == null){ // if the list is empty
            this.head = this.tail = node;
        }else{
            tail.next = node;
            tail = node;
        }
        size++;
    }
    
    public void addFirst(int data){
        Node node = new Node(data);
        node.next = head;
        head = node;
        size++;
    }
    
    public void addAt(int data, int pos){ // counts from zero to size - 1;
        if(pos < 0 || pos >= size){ // Invalid position
            System.out.println("Position is invalid");
            return;
        }
        if(pos == 0){ // pos = 0 is add first
            this.addFirst(data);
            return;
        }
        if(pos == size - 1){ // pos = size-1 add last
            this.addLast(data);
            return;
        }
        Node node = new Node(data);
        Node temp = head; // Temp references to the node before the pos
        for(int i = 0; i < pos-1; i++){
            temp = temp.next;
        }
        node.next = temp.next; // New node.next will ref. to temp.next
        temp.next = node; // Fix the link
        size++;
    }
    
    public void deleteFirst(){
        Node temp = head;
        head = head.next;
        temp = null;
        size--;
    }
    
    public void deleteAtIndex(int pos){
        if(pos < 0 || pos >= size){ // Invalid position
            System.out.println("Position is invalid");
            return;
        }
        if(pos == 0){
            this.deleteFirst();
            return;
        }
        Node temp = head; // temp is pointing to node that is before the node to delete
        for(int i = 0; i < pos - 1; i++){
            temp = temp.next;
        }
        
        Node toDel = temp.next; // toDel - node to delete
        temp.next = toDel.next; // 
        if(pos == size - 1){ // Corner case: delete at tail
            this.tail = temp;
        }
        size--;
    }
    
    public void deleteData(int data){
        Node temp = head;
        Node prev = null;
        
        if(temp!= null && data == temp.data){
            this.deleteFirst();
            return;
        }
        while(temp != null && temp.data != data){
            prev = temp;
            temp = temp.next;
        }
        if(temp == null) return; // If the key was not present in list
        if(temp == tail){
            this.tail = prev;
        }
        prev.next = temp.next; // Fix the link
    }
    
    private void swapNodeData(Node n1, Node n2){
        if(n1 == null || n2 == null){
            return;
        }
        int temp = n1.data;
        n1.data = n2.data;
        n2.data = temp;
    }
    
    public void bubbleSort(){
        int n = size;
	for(int i = 0; i < n - 1; i++){
            Node h = head;
            int isSwapped = 0;
            for(int j = 0; j < n - i - 1; j++){
                Node n1 = h;
                Node n2 = n1.next;
                if(n1.data > n2.data){
                    swapNodeData(n1,n2);
                    isSwapped = 1;
                }
                h = h.next;
            }
            if(isSwapped == 0)
                break;
	}
    }
}
