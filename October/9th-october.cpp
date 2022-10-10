// Question - https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    void in(TreeNode* root){
        if(root==NULL)
            return;
        in(root->left);
        res.push_back(root->val);
        in(root->right);
        
    }
    bool findTarget(TreeNode* root, int k) {
        
        in(root);
        int n=res.size();
        if(n==1)
            return false;
        int start=0;
        int end=n-1;
        while(start<end){
            if(res[start]+res[end]==k)
                return true;
            if(res[start]+res[end]>k)
                end--;
            if(res[start]+res[end]<k)
                start++;
        }
        return false;
    }
};

// Submission - https://leetcode.com/submissions/detail/818609865/