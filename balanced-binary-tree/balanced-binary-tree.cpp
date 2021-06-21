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
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        return solve(root).first;
    }
    
    pair<bool,int> solve(TreeNode* root){
        if(root->left==NULL and root->right==NULL)
            return {true,1};
        
        int left_h = 0, right_h = 0;
        
        if(root->left){
            auto left = solve(root->left);
            if(left.first==false)return {false,left_h};
            left_h = left.second;
        }
        
         if(root->right){
            auto right = solve(root->right);
            if(right.first==false)return {false,right_h};
            right_h = right.second;
        }
        
        if(abs(left_h - right_h)>1)return {false, INT_MIN};
        
        int height = 1 + max(left_h, right_h);
        return {true,height};
    }
};