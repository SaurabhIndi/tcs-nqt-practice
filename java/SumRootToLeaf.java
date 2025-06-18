
class Node{
    int data;
    Node left,right;
    Node(int x){
        data=x;
        left=null;
        right=null;
    }
}

class SumRootToLeaf{

    static long treePathsSum(Node root, long val){
        if (root == null) return 0;
        val=val*10+root.data;
        if(root.left==null && root.right==null) return val;
        return treePathsSum(root.left, val) + treePathsSum(root.right, val);
    }
    public static void main(String[] args) {

        // Hard coded binary tree.
        //          6
        //        /  \
        //       3    5
        //     /  \    \
        //    2   5     4  
        //       / \
        //      7   4
        Node root = new Node(6);
        root.left = new Node(3);
        root.right = new Node(5);
        root.left.left = new Node(2);
        root.left.right = new Node(5);
        root.right.right = new Node(4);
        root.left.right.left = new Node(7);
        root.left.right.right = new Node(4);

        System.out.println(treePathsSum(root, 0));
    }
}