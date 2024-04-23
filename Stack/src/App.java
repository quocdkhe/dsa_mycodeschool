public class App {
    public static void main(String[] args) throws Exception {
        Stack stack = new LinkedListStack();
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(10);
        stack.push(12);
        System.out.println(stack.top()); // 10
        stack.pop();
        System.out.println(stack.top());//3
        stack.print();
    }
}
