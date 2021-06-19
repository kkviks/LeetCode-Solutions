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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> out;
        int level = 0;
        queue<Node*> q;
        if(root)q.push(root);
        
        while(!q.empty()){
            level++;
            vector<int> temp;
            for(int i=q.size()-1;i>=0;i--){
                auto front = q.front(); q.pop();
                temp.push_back(front->val);
                for(auto child:front->children){
                    if(child)q.push(child);
                }
            }
            out.push_back(temp);
        }
        
        return out;
    }
};