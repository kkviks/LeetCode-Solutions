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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)return true;
        return solve(root).first;
    }
    
    pair<bool,int> solve(TreeNode* root){
        if(root->left==NULL and root->right==NULL){
            return {true,root->val};
        }
        
        if(root->left){
            auto left = solve(root->left);
            if(left.first==false or left.second!=root->val)return {false,INT_MIN};
        }
        
        if(root->right){
            auto right = solve(root->right);
            if(right.first==false or right.second!=root->val)return {false,INT_MIN};
        }
        
        return {true,root->val};
    }
};