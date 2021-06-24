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
    vector<vector<int>> ans;
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curr;
        dfs(root,curr, targetSum);
        return ans;
    }
    
    void dfs(TreeNode* root, vector<int> curr, int sum){
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL){
            curr.push_back(root->val);
            sum -= root->val;
            if(sum==0)
                ans.push_back(curr);
            return;
        }
        
        curr.push_back(root->val);
        dfs(root->left,curr,sum-root->val);
        dfs(root->right,curr,sum-root->val);
    }
};