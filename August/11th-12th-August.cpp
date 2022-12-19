// Question - https://leetcode.com/problems/validate-binary-search-tree/

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
    void solve(TreeNode* root) {
        if(root == NULL) 
            return; 
        solve(root->left);
        res.push_back(root->val); 
        solve(root->right);
    }
    bool isValidBST(TreeNode* root) {   
        solve(root); 
        for(int i=1; i<res.size(); i++) {
            if(res[i] <= res[i-1])
                return false; 
        }
        return true;
    }
};

// Submission - https://leetcode.com/submissions/detail/770771825/

// Question - https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q)return root;
        if(root->val>p->val && root->val>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        if(root->val<p->val && root->val<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
    }
};

// Submission - https://leetcode.com/submissions/detail/771822090/
