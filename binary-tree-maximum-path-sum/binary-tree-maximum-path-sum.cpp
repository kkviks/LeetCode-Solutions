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
private:
    int max_val = INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        max_gain(root);
        return max_val;
    }
    
    int max_gain(TreeNode* root){
        if(root==NULL)return 0;
        
        int left = max(0,max_gain(root->left));
        int right = max(0,max_gain(root->right));
        
        int include = root->val + left + right;
        max_val = max(max_val,include);
        
        return root->val + max(left,right);
    }
};