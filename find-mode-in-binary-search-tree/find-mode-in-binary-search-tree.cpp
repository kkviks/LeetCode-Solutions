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
    unordered_map<int,int> m;
    int max_frequency=0;
public:
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int> ans;
        
        for(auto p:m){
            if(p.second==max_frequency)
                ans.push_back(p.first);
        }
        
        return ans;
    }
    
    void dfs(TreeNode* root){
        if(root==NULL)return;
        
        m[root->val]++;
        max_frequency = max(max_frequency, m[root->val]);
        
        dfs(root->left);
        dfs(root->right);
    }
};