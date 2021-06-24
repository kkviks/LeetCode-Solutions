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
    int goodNodes(TreeNode* root) {
        int count = 0;
        solve(root,root->val,count);
        return count;
    }
    
    void solve(TreeNode* root, int max_val, int &count){
        if(root==NULL)return;
        
        if(root->val >= max_val){
            count++;
            max_val = root->val;
        }
        
        solve(root->left,max_val,count);
        solve(root->right,max_val,count);
    }
};