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
    unordered_map<int,int> map;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for(int i=0;i<inorder.size();++i){
            map[inorder[i]] = i;
        }
        int curr = 0, n = inorder.size();
        return build(curr,0,n-1,preorder,inorder);
    }
    
    TreeNode* build(int &curr, int left, int right,vector<int>& preorder, vector<int>& inorder){
        
        if(left>right)return NULL;
        
        TreeNode* root = new TreeNode(preorder[curr++]);
        root->left = build(curr,left,map[root->val]-1,preorder,inorder);
        root->right = build(curr,map[root->val]+1,right,preorder,inorder);
        
        return root;
    }
};