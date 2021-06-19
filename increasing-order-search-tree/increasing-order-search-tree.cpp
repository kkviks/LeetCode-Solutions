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
    TreeNode* increasingBST(TreeNode* root) {
        return solve(root).first;
    }
    
    pair<TreeNode*, TreeNode*> solve(TreeNode* root){
        if(root==NULL)return {NULL,NULL};
        if(root->left==NULL and root->right==NULL)
            return {root,root};
        
        auto right = solve(root->right);
        auto left = solve(root->left);
        
        root->left = NULL;
        root->right = right.first;
        
        TreeNode *head, *tail;
        
        if(left.first==NULL and left.second==NULL){
            head = root;
            tail = right.second;
            return {head,tail};
        }
        
        if(right.second==NULL and right.first==NULL){
            head = left.first;
            tail = left.second;
            tail->right = root;
            tail = root;
            return {head,tail};
        }
        
        head = left.first;
        tail = left.second;
        
        tail->right = root;
        tail = right.second;
        
        return {head,tail};
    }
};