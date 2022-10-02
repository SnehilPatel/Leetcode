// Question - https://leetcode.com/problems/binary-tree-pruning/

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
    public TreeNode pruneTree(TreeNode root) {
        
        if (root==null || !check(root)) {
            return null;
        }
        
        root.left=pruneTree(root.left);
        root.right=pruneTree(root.right);
        
        return root;
    }
    
    static boolean check(TreeNode root) {
        if (root==null) {
            return false;
        }
        
        if (root.val==1) {
            return true;
        }
        
        return check(root.left) || check(root.right);
    }
}

// Submission - https://leetcode.com/submissions/detail/793183513/