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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
    
    TreeNode* solve(vector<int> const &a, int l, int r){
        if(l>r)return NULL;
        
        int mid = l+(r-l)/2;
        TreeNode* root = new TreeNode(a[mid]);
        root->left = solve(a,l,mid-1);
        root->right = solve(a,mid+1,r);
        
        return root;
    }
};