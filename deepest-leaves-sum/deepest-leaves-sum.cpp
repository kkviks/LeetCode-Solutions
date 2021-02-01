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
    int height(TreeNode* root){
        if(root==NULL)return 0;
        if(root->left == NULL and root->right==NULL)return 1;
        
        int so1 = height(root->left);
        int so2 = height(root->right);
        
        int ans = max(so1,so2) + 1;
        return ans;
    }
    int sum_me(TreeNode* root, int h){
        if(root==NULL)return 0;
        if(h==1){
            return root->val;
        }
        int sum = 0;
        sum += sum_me(root->left,h-1);
        sum += sum_me(root->right,h-1);
        
        return sum;
    }
public:

    int deepestLeavesSum(TreeNode* root) {
        int h_max = height(root);
        int ans = sum_me(root,h_max);
        return ans;
    }
};