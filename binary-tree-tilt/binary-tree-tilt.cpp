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
    int findTilt(TreeNode* root) {
        if(root==NULL)return 0;
        return solve(root).second;
    }
    
    pair<int,int> solve(TreeNode* root){
        if(root->left==NULL and root->right==NULL)
            return {root->val, 0};
        
        int left_sum = 0, right_sum=0, tilt = 0;
        
        if(root->left){
            auto left = solve(root->left);
            left_sum = left.first;
            tilt += left.second;
        }
        
        if(root->right){
            auto right = solve(root->right);
            right_sum = right.first;
            tilt += right.second;
        }
        
        tilt += abs(left_sum - right_sum);
        int sum = left_sum + right_sum + root->val;
        
        return {sum, tilt};
    }
};