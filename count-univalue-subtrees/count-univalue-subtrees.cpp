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
    int count = 0;
public:
    int countUnivalSubtrees(TreeNode* root) {
        univariate(root);
        return count;
    }
    
    pair<bool,int> univariate(TreeNode* root){
        
        if(root==NULL)return {true,INT_MIN};
        if(root->left==NULL and root->right==NULL){
            count++;
            return {true,root->val};
        }
        
        auto left = univariate(root->left);
        auto right = univariate(root->right);
        
        if(left.first==false or right.first==false)return {false,INT_MIN};
        
        if((left.second!=INT_MIN and root->val!=left.second) 
           or (right.second!=INT_MIN and root->val!=right.second)) return {false,INT_MIN};
        
        count++;
        return {true,root->val};
    }
};