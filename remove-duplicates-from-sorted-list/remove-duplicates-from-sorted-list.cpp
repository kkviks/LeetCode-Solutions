/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       
        if(head==NULL or head->next==NULL)return head;
        
        ListNode* curr = head, *next=NULL;
        while(curr!=NULL){
            next = curr->next;
            while(next!=NULL and next->val == curr->val){
                auto temp = next;
                next = next->next;
                delete temp;
            }
            curr->next = next;
            curr = next;
        }
        
        return head;
    }
};