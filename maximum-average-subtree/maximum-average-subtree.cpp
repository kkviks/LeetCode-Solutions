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
    double ans = INT_MIN;
public:
    double maximumAverageSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
    
    pair<int,int> solve(TreeNode* root){
        if(root==NULL)return {0,0};
        
        auto left = solve(root->left);
        auto right = solve(root->right);
        
        ans = max(ans, left.first*1.0/left.second);
        ans = max(ans, right.first*1.0/right.second);
        
        int sum = left.first + right.first + root->val;
        int nodes = left.second + right.second + 1;
        ans = max(ans, sum*1.0/nodes);
        
        return {sum,nodes};
    }
};