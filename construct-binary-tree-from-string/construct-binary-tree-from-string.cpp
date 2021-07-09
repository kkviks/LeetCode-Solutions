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
    TreeNode* str2tree(string s) {
        if(s.empty())return NULL;
        
        int n = s.size();        
        string rootString = "";
        
        int i = 0;
        while(i<n and s[i]!='(')
        {
            rootString += s[i];
            i++;
        }
        
        TreeNode* root = new TreeNode(stoi(rootString));
        stack<char> stack;
        stack.push('(');
        i++;
        
        string leftString = "";        
        while(i<n and !stack.empty())
        {
            if(s[i]=='(')
                stack.push('(');
            else if(s[i]==')' and !s.empty())
                stack.pop();
            if(!s.empty())
                leftString += s[i];
            
            i++;
        }
        
        i++;
        string rightString = "";
        while(i<n-1)
        {
            rightString += s[i];
            i++;
        }
        
        root->left = str2tree(leftString);
        root->right = str2tree(rightString);
        
        return root;
    }
};