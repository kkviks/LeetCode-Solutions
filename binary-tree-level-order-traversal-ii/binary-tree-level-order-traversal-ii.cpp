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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            temp.reserve(q.size());
            for(int i=q.size()-1;i>=0;i--){
                TreeNode* front = q.front(); q.pop();
                if(front == NULL)continue;
                temp.push_back(front->val);
                if(front->left!=NULL)q.push(front->left);
                if(front->right!=NULL)q.push(front->right);
            }
            if(temp.size())v.push_back(temp);
        }
        reverse(begin(v),end(v));
        return v;
    }
};