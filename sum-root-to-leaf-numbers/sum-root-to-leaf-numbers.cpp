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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        solve(root, 0, sum);
        return sum;
    }
    
    void solve(TreeNode* root, int x, int &sum){
        if(root->left==NULL and root->right==NULL){
            sum += x*10 + root->val;
            return;
        }
        
        x = x*10 + root->val;
        if(root->left)solve(root->left,x, sum);
        if(root->right)solve(root->right,x,sum);
    }
};