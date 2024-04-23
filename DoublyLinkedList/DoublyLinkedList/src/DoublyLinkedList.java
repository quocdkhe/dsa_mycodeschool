public class DoublyLinkedList{

    static class Node{
        public int data;
        public Node prev;
        public Node next;

        public Node(){}
        public Node(int data){
            this.data = data;
            prev = null;
            next = null;
        }
    }

    public Node head;

    public DoublyLinkedList(){
        head = null;
    }


    public void InsertAtHead(int x) {
        Node newNode = new Node(x);
        if(head == null){
            head = newNode;
            return;
        }
        head.prev = newNode;
        newNode.next = head;
        head = newNode;
    }

    public void print() {
        Node temp = head;
        if(temp == null) return;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }


    public void reversePrint() {
        Node temp = head;
        if(temp == null) return; // Empty list, exit
        while(temp.next != null){ // Go to the last node 
            temp = temp.next;
        }
        while(temp != null){// Traversing backward using prev 
            System.out.print(temp.data + " ");
            temp = temp.prev;
        }
    }

}