/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Codec {

    // Encodes a tree to a single string.
    public String serialize(TreeNode root) {
        StringBuilder sb=new StringBuilder();
        serialize(root,sb);
        return sb.toString();
    }
    public void serialize(TreeNode root,StringBuilder sb){
        if(root==null)sb.append("#").append(",");
        else{
            sb.append(root.val).append(",");
            serialize(root.left,sb);
            serialize(root.right,sb);
        }
    }

    // Decodes your encoded data to tree.
    public TreeNode deserialize(String data) {
        Queue<String>q=new LinkedList<>(Arrays.asList(data.split(",")));
        return deserialize(q);
    }
    public TreeNode deserialize(Queue<String>q){
        String s=q.poll();
        if(s.equals("#"))return null;
        TreeNode root=new TreeNode(Integer.parseInt(s));
        root.left=deserialize(q);
        root.right=deserialize(q);
        return root;
    }
}

// Your Codec object will be instantiated and called as such:
// Codec ser = new Codec();
// Codec deser = new Codec();
// String tree = ser.serialize(root);
// TreeNode ans = deser.deserialize(tree);
// return ans;