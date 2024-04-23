public class App {
    public static void main(String[] args) throws Exception {
        DoublyLinkedList list = new DoublyLinkedList();
        list.InsertAtHead(3);
        list.InsertAtHead(4);
        list.InsertAtHead(5);
        list.print();
        list.reversePrint();
    }
}
