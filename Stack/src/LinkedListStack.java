public class LinkedListStack implements Stack{
    static class Node{
        int data;
        Node next;
        public Node(int data){
            this.data = data;
            this.next = null;
        }
    }

    private Node top;
    public LinkedListStack(){
        top = null;
    }
    @Override
    public boolean isEmpty() {
        return (top == null) ? true : false;
    }

    @Override
    public void pop() {
        if(isEmpty()){
            System.out.println("The stack is empty");
            return;
        }
        top = top.next;
    }

    @Override
    public void push(int x) {
        Node newNode = new Node(x);
        if(top == null){
            top = newNode;
            return;
        }
        newNode.next = top;
        top = newNode;
    }

    @Override
    public int top() {
        return top.data;
    }
    
    public void print(){
        Node temp = top;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}
