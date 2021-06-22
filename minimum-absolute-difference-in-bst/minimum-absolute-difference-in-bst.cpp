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
    int min_diff = INT_MAX;
public:
    int getMinimumDifference(TreeNode* root) {
        int prev = root->val;
        solve(root,prev);
        return min_diff;
    }
    
    void solve(TreeNode* root, int &prev){
        if(root==NULL)return;
        
        solve(root->left,prev);
        
        if(prev!=root->val)min_diff = min(min_diff, abs(root->val-prev));
        prev = root->val;
        
        solve(root->right, prev);
    }
};