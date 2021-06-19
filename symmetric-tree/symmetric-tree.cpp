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
    bool isSymmetric(TreeNode* root) {
        return isMirror(root,root);
    }
    
    bool isMirror(TreeNode* r1, TreeNode *r2){
        if(r1==NULL and r2==NULL)return true;
        if(r1==NULL or r2==NULL)return false;
        
        bool ans = r1->val == r2->val;
        ans &= isMirror(r1->left,r2->right);
        ans &= isMirror(r1->right,r2->left);
        
        return ans;
    }
};