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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* i = l1, *j = l2, *curr = new ListNode(INT_MIN), *head = curr;
        
        while(i!=NULL and j!=NULL){
            if(i->val <= j->val){
                curr->next = i;
                i = i->next;
            }else {
                curr->next = j;
                j = j->next;
            }
            curr = curr->next;
        }
        
        while(i!=NULL){
            curr->next = i;
            curr = curr->next;
            i = i->next;
        }
        
        while(j!=NULL){
            curr->next = j;
            curr = curr->next;
            j = j->next;
        }
        
        head = head->next;
        //delete curr;
        
        return head;
    
    }
};