public class App {
    public static void main(String[] args) throws Exception {
        SinglyLinkedList list = new SinglyLinkedList();
        list.insertNode(12);
        list.insertNode(9);
        list.insertNode(27);
        list.insertNode(01);
        list.print();
        list.reverse();
        list.print();
    }
}
