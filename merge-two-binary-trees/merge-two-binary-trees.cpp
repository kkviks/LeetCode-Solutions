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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL)return NULL;
        if(root1 and root2==NULL)return root1;
        if(root2 and root1==NULL)return root2;
        solve(root1,root2, NULL, true);
        return root1;
    }
    
    void solve(TreeNode* root1, TreeNode* root2, TreeNode* parent, bool isLeftOfParent){
        if(root1==NULL and root2==NULL)return;
        
        if(root1 and root2){
            root1->val += root2->val;
            solve(root1->left, root2->left, root1, true);
            solve(root1->right,root2->right, root1, false);
        }else if(root1){
            return;
        }else if(root2){
            if(isLeftOfParent)parent->left = root2;
            else parent->right = root2;
            //solve(NULL,root2->left,root2,true);
            //solve(NULL,root2->right,root2,false);
        }
    }
};