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
    int ans = 0;
public:
    int sumRootToLeaf(TreeNode* root) {
        solve(root,1,0);
        return ans;
    }
    
    void solve(TreeNode* root, int x, int sum){
        if(root->left==NULL and root->right==NULL){
            sum = (sum<<1) + root->val;
            ans += sum;
            return;
        }
        
        sum = (sum<<1) +root->val;
        x = x<<1;
        if(root->left)solve(root->left,x,sum);
        if(root->right)solve(root->right,x,sum);
    }
};