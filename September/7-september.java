// Question - https://leetcode.com/problems/construct-string-from-binary-tree/

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
    public String tree2str(TreeNode root) {
        
        if (root==null) {
            return "";
        }
        
        String s=Integer.toString(root.val);
        
        String a=tree2str(root.left);
        String b=tree2str(root.right);
        
        if (a.length()!=0) {
            s=s+'('+a+')';
        } else if (b.length()!=0) {
            s=s+"()";
        }
        
        if (b.length()!=0) {
            s=s+'('+b+')';
        }
        
        return s;
    }
}

// Submission - https://leetcode.com/submissions/detail/793869497/