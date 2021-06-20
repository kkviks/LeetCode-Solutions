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
    struct Tuple{
        bool isBST;
        int min;
        int max;
        
        Tuple(bool isBST){
            this->isBST = isBST;
            min = INT_MAX;
            max = INT_MIN;
        }
        
        Tuple(bool isBST, int min, int max){
            this->isBST = isBST;
            this->min = min;
            this->max = max;
        }
    };
public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true;
        return solve(root).isBST;
    }
    
    Tuple solve(TreeNode* root){
        
        if(root->left==NULL and root->right==NULL){
            Tuple out(true,root->val,root->val);
            return out;
        }
        
        Tuple out(false);
        if(root->left){
            auto left = solve(root->left);
            if(left.isBST==false or left.max >= root->val){
                Tuple out(false);
                return out;
            }
            else{
                out.isBST = true;
                out.max = root->val;
                out.min = left.min;
            }
        }
        
        if(root->right){
            auto right = solve(root->right);
            if(right.isBST==false or right.min <= root->val){
                Tuple out(false);
                return out;
            }
            else{
                out.isBST = true;
                out.max = right.max;
                out.min = min(out.min, root->val);
            }
        }
        
        return out;        
    }
    
};