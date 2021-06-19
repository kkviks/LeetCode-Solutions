/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> out;
        solve(root, out);
        return out;
    }
    
    void solve(Node* root, vector<int> &out){
        if(root==NULL)return;
        
        for(auto child:root->children){
            solve(child,out);
        }
        
        out.push_back(root->val);
    }
};