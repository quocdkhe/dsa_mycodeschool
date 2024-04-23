import java.util.Stack;

public class SinglyLinkedList{
    static class Node{
        public int data;
        public Node next;
        public Node(){}
        public Node(int data){
            this.data = data;
            this.next = null;
        }
    }

    public Node head;
    public Node tail;
    public int size;

    public SinglyLinkedList(){
        this.head = null;
        this.tail = null;
    }

    public void insertNode(int data){
        Node node = new Node(data);
        if(head == null){
            head = node;
        }else{
            tail.next = node;
        }
        tail = node;
        size++;
    }

    public void insertNode(int data, int n){
        Node temp1 = new Node(data);
        if(n == 1){
            temp1.next = head;
            head = temp1;
            tail = temp1;
            size++;
            return;
        }

        if(n == size){
            this.insertNode(data);
            return;
        }

        Node temp2 = head;
        for(int i = 0; i < n - 2; i++){
            temp2 = temp2.next;
        }
        temp1.next = temp2.next;
        temp2.next = temp1;

    }

    public void delete(int n){
        Node temp1 = head;
        if(n == 1){
            head = temp1.next;
            temp1 = null;
            return;
        }
        for(int i = 0; i < n-2; i++){
            temp1 = temp1.next;
        }
        // temp1 is pointing to n-1 node
        Node temp2 = temp1.next; // nth Node

        if(n == size){
            tail = temp1;
        }

        temp1.next = temp2.next; // (n+1)th Node
        temp2 = null; // free temp2
        size--;
    }

    // I love you 3000, Ngoc Anh, love you,

    public void print(){
        Node p = head;
        if(p == null){
            return;
        }
        while(p != null){
            System.out.print(p.data + " ");
            p = p.next;
        }
        System.out.println();
    }

    public void reverse(){
        Node current, prev, next;
        current = head;
        tail = current;
        prev = null;
        while(current != null){
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    public void reverseUsingStack(){
        if(head == null)
            return;
        Stack<Node> stack = new Stack<>();
        Node temp = head;
        while(temp != null){
            stack.push(temp);
            temp = temp.next;
        }

        temp = stack.pop();
        head = temp;
        while(!stack.isEmpty()){
            temp.next = stack.pop();
            temp = temp.next;
        }
        temp.next = null;
        this.tail = temp;
    }

}