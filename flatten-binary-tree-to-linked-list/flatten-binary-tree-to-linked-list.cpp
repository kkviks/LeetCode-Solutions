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
    void flatten(TreeNode* &root) {
        if(root==NULL)return;
        solve(root);
    }
    
    pair<TreeNode*, TreeNode*> solve(TreeNode* root){
        if(root->left==NULL and root->right==NULL){
            return {root, root};
        }
        
        TreeNode* leftChild = root->left;
        TreeNode* rightChild = root->right;
        
        root->left=NULL;
        root->right=NULL;
        
        TreeNode* head = root, *tail = root;
        
        if(leftChild){
            auto left = solve(leftChild);
            head->right = left.first;
            tail = left.second;
        }
        
        if(rightChild){
            auto r = solve(rightChild);
            tail->right = r.first;
            tail = r.second;
        }
        
        return {head,tail};
    }
};