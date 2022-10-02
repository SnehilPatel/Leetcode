// Question - https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    class Node implements Comparable<Node>{
        TreeNode node;
        int hd;
        int level;
        
        Node (TreeNode node, int hd, int level) {
            this.node=node;
            this.hd=hd;
            this.level=level;
        }
        
        public int compareTo(Node o) {
            int x=this.level-o.level;
            if (x!=0) {
                return x;
            }
            return this.node.val-o.node.val;
        }
    }
    
    public List<List<Integer>> verticalTraversal(TreeNode root) {
        
        Queue<Node> queue=new LinkedList<>();
        
        queue.add(new Node(root,0,0));
        
        List<List<Integer>> ans=new ArrayList<>();
        Node temp;
        
        Map<Integer,List<Node>> map=new TreeMap<>();
        
        while (queue.size()!=0) {
            
            temp=queue.remove();
            
            if (temp.node.left!=null) {
                queue.add(new Node(temp.node.left,temp.hd-1,temp.level+1));
            }
            
            if (temp.node.right!=null) {
                queue.add(new Node(temp.node.right,temp.hd+1,temp.level+1));
            }
            
            if (map.containsKey(temp.hd)) {
                map.get(temp.hd).add(temp);
            } else {
                List<Node> set=new ArrayList<>();
                map.put(temp.hd,set);
                map.get(temp.hd).add(temp);
            }
        }
        
        for (int hd: map.keySet()) {
            Collections.sort(map.get(hd));
            List<Integer> list=new ArrayList<>();
            
            for (Node t: map.get(hd)) {
                list.add(t.node.val);
            }
            ans.add(list);
        }
        
        return ans;
    }
}

// Submission - https://leetcode.com/submissions/detail/791398778/