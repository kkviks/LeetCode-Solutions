/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* buildTree(int a[],int start, int end){
        if(start>end)return NULL;
        if(start==end)return new TreeNode(a[start]);
        int maxIdx = max_element(a+start,a+end+1)-a;
        TreeNode* root = new TreeNode(a[maxIdx]);
        cout << root->val << endl;
        root->left = buildTree(a,start,maxIdx-1);
        root->right = buildTree(a,maxIdx+1, end);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& v) {
        int* a = new int[v.size()];
        for(int i=0;i<v.size();i++){
            a[i] = v[i];
        }
        auto root = buildTree(a, 0, v.size()-1);
        delete []a;
        return root;
    }
};
