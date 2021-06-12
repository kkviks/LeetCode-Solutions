/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL)return NULL;
        
        Node* curr = head;
        //Creating Nodes
        while(curr!=NULL){
            auto newNode = new Node(curr->val);
            auto temp = curr->next;
            newNode-> next = temp;
            curr->next = newNode;
            curr = temp;
        }
        //Random Connections
        curr = head;
        while(curr!=NULL){
            if(curr->random!=NULL){
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        //Extracting
        auto new_head = head->next;
        auto new_curr = new_head;
        
        curr = new_head->next;
        head->next= curr;
        while(curr!=NULL){
            new_curr->next = curr->next;
            curr->next = curr->next->next;
            curr = curr->next;
            new_curr = new_curr->next;
        }
        
        return new_head;
    }
};