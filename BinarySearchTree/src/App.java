public class App {
    public static void main(String[] args) throws Exception {
        BST bst = new BST();
        bst.Insert(10);
        bst.Insert(15);
        bst.Insert(20);
        bst.Insert(25);
        System.out.println(bst.Search(10));
    }
}
