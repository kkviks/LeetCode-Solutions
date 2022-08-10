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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL and subRoot==NULL)return true;
        if(root!=NULL and subRoot==NULL)return false;
        if(root==NULL and subRoot!=NULL)return false;
        
        bool leftHas = isSubtree(root->left, subRoot);
        if(leftHas)return true;
        bool rightHas = isSubtree(root->right, subRoot);
        if(rightHas)return true;
        
        bool ok = isOverlap(root, subRoot);
        return ok;
    }
    
    bool isOverlap(TreeNode* root, TreeNode* subRoot){
        if(root==NULL and subRoot==NULL)return true;
        if(root!=NULL and subRoot==NULL)return false;
        if(root==NULL and subRoot!=NULL)return false; 
        
        bool leftSame = isOverlap(root->left, subRoot->left);
        bool rightSame = isOverlap(root->right, subRoot->right);
        bool ans = root->val == subRoot->val;
        ans &= leftSame;
        ans &= rightSame;
        return ans;
    }
};