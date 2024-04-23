public class BST {
    static class Node{
        int data;
        Node left;
        Node right;

        public Node(int data){
            this.data = data;
            left = null;
            right = null;
        }
    }   

    private Node root;

    public BST(){
        root = null;
    }

    private Node Insert(int data, Node root){
        if(root == null){
            return new Node(data);
        }
        else if(data <= root.data){
            root.left = Insert(data, root.left);
        }
        else{
            root.right = Insert(data, root.right);
        }
        return root;
    }

    public void Insert(int data){
        this.root = Insert(data,root);
    }


    private boolean Search(int data, Node root){
        if(root == null){
            return false;
        }
        else if(data == root.data){
            return true;
        }
        else if(data <= root.data){
            return Search(data, root.right);
        }
        else{
            return Search(data, root.left);
        }
    }

    public boolean Search(int data){
        Node temp = root;
        return Search(data, temp);
    }
}
