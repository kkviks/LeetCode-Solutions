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
        if(root==NULL)return NULL;
        
        if(root==p or root==q)return root;
        
        TreeNode* left = NULL, *right = NULL;
        
        if(root->val > p->val and root->val > q->val){
            left = lowestCommonAncestor(root->left,p,q);
        }else if(root->val < p->val and root->val < q->val){
            right = lowestCommonAncestor(root->right,p,q);
        }else{
            left = lowestCommonAncestor(root->left,p,q);
            right = lowestCommonAncestor(root->right,p,q);
        }
        
        if(left==NULL and right==NULL)return NULL;
        if(left!=NULL and right!=NULL)return root;
        
        return left?left:right;
    }
};