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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return solve(0,preorder.size()-1, preorder);
    }
    
    TreeNode* solve(int i, int j, vector<int> const &preorder){
        if(i>j)return NULL;      
        
        TreeNode* root = new TreeNode(preorder[i]);
    
        int curr = i+1;
        while(curr<=j and preorder[curr]<preorder[i])curr++;
        
        root->left = solve(i+1,curr-1,preorder);
        root->right = solve(curr,j,preorder);
        
        return root;
    }
};