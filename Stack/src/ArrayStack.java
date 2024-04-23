public class ArrayStack implements Stack{
    private final int MAX_SIZE = 101;
    private int A[];
    private int top;
    public ArrayStack(){
        top = -1;
        A = new int[MAX_SIZE];
    }

    public void push(int x){
        if(top == MAX_SIZE -1){
            System.out.println("Error: stack overflow!");
            return;
        }
        A[++top] = x;
    }
    public void pop(){
        if(top == -1){
            System.out.println("Error: No element to pop");
            return;
        }
        top--;
    }
    public int top(){
        return A[top];
    }
    
    public boolean isEmpty(){
        return (top == -1) ? true : false;
    }

    public void print(){
        for(int i = 0; i < top; i++){
            System.out.print(A[i] +" ");
        }
    }
}