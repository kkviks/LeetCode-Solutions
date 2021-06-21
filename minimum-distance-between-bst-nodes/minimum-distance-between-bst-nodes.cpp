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
    int minDiffInBST(TreeNode* root) {
        int min_diff = INT_MAX;
        int prev_val = root->val;
        
        dfs(root,prev_val,min_diff);
        return min_diff;
    }
    
    void dfs(TreeNode* root, int &prev_val, int &min_diff){
        if(root==NULL)return;
          
        dfs(root->left, prev_val, min_diff);
          if(prev_val!=root->val){
            min_diff = min(min_diff, abs(root->val-prev_val));
        }
        
        prev_val = root->val;
        dfs(root->right, prev_val, min_diff);
    }
};