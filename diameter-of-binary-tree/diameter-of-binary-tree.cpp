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
    struct T{
        int d;
        int h;
        T(int d, int h){
            this->d = d;
            this->h = h;
        }
    };
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return solve(root).d;
    }
    
    T solve(TreeNode* root){
        if(root==NULL){
            T t(0,0);
            return t;
        }
        
        T left = solve(root->left);
        T right = solve(root->right);
        
        int h = 1 + max(left.h,right.h);
        int d = max({left.d, right.d, left.h + right.h});
        
        T t(d,h);
        return t;
    }
};