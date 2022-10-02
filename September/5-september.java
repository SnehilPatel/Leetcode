// Question - https://leetcode.com/problems/n-ary-tree-level-order-traversal/

/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        
        List<List<Integer>> list=new ArrayList<>();
        
        if (root==null) {
            return list;
        }
        
        Queue<Node> queue=new LinkedList<>();
        int size;
        Node temp;
        List<Integer> l;
        
        queue.add(root);
        while (queue.size()>0) {
            
            size=queue.size();
            l=new ArrayList<>();
            
            for (int i=0; i<size; i++) {
                temp=queue.remove();
                
                for (int j=0; j<temp.children.size(); j++) {
                    queue.add(temp.children.get(j));
                }
                
                l.add(temp.val);
            }
            
            list.add(l);
        }
        
        return list;
    }
}

// Submission - https://leetcode.com/submissions/detail/792269393/