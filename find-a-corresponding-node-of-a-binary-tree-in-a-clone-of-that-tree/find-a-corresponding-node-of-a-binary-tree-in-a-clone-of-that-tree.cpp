/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* t1, TreeNode* t2, TreeNode* t) {
        map<pair<TreeNode*, TreeNode*>, TreeNode*> m;
        return f(t1,t2,t,m);
    }
    
    TreeNode* f(TreeNode* t1, TreeNode* t2, TreeNode* t, map<pair<TreeNode*, TreeNode*>, TreeNode*> &m ) {
        if(t2==NULL or t==NULL)return NULL;
        
        if(m.count({t2,t}))return m[{t2,t}];
        
        if(t2->val==t->val
           and f(t1,t2->left,t->left,m)==t2->left
           and f(t1,t2->right,t->right,m)==t2->right
          )return t2;
        
        auto ans = f(t1,t2->left,t, m);
        return m[{t2,t}]=ans?ans: f(t1,t2->right,t, m);
    }
};