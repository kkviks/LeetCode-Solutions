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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> out;
        auto node = root;
        while(node!=NULL){
            if(node->left){
                auto t = node->left;
                while(t->right!=NULL and t->right!=node){
                    t = t->right;
                }
                if(t->right==NULL){
                    out.push_back(node->val);
                    t->right = node;
                    node = node->left;
                }else if(t->right==node){
                    t->right = NULL;
                    node = node->right;
                }
            }
            else{
                out.push_back(node->val);
                node = node->right;
            }
        }
        
        return out;
    }
};