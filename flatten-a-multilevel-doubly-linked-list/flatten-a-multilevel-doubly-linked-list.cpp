/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
private:
    pair<Node*,Node*> flatten_helper(Node* head){
        if(head==NULL)return {head,head};
        
        Node* curr = head, *prev = NULL;
        
        while(curr!=NULL){
            if(curr->child){
                auto temp = curr->next;
                auto p = flatten_helper(curr->child);
                Node* childHead = p.first;
                Node* childTail = p.second;
                childHead->prev = curr;
                curr->next = childHead;
                curr->child=NULL;
                childTail->next = temp;
                if(temp!=NULL)temp->prev = childTail;
                prev = childTail;
                curr = temp;
            }else {
                prev = curr;
                curr = curr->next;
            }
        }
        
        return {head,prev};
    }
public:
    Node* flatten(Node* head) {
        return flatten_helper(head).first;
    }
};