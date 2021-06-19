class Solution {
private:
    vector<int> out;
public:
    vector<int> preorder(Node* root) {
        if(root==NULL)return out;
        
        out.push_back(root->val);
        for(auto &child: root->children){
            preorder(child);
        }
        
        return out;
    }
};
 