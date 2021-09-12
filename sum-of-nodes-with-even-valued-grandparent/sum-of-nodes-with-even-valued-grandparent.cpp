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
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        solve(root, sum);
        return sum;
    }
    
    void solve(TreeNode* root, int &sum){
        if(root==NULL)return;
        
        bool flag1 = false;
        if(root->left and root->left->left){
            if(root->val % 2 == 0)sum += root->left->left->val;
            flag1 = true;
            solve(root->left,sum);
        }
        
        if(root->left and root->left->right){
            if(root->val % 2 == 0)sum += root->left->right->val;
            if(flag1==false)solve(root->left,sum);
        }
        
        bool flag2 = false;
        if(root->right and root->right->left){
            if(root->val % 2 == 0)sum += root->right->left->val;
            flag2 = true;
            solve(root->right,sum);
        }
        
        if(root->right and root->right->right){
            if(root->val % 2 == 0)sum += root->right->right->val;
            if(flag2==false)solve(root->right,sum);
        }
        
        return;
    }
};