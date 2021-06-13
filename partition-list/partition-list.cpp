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
    ListNode* partition(ListNode* head, int x) {
        ListNode *smallerListHead = new ListNode(INT_MIN), *smallerListTail = smallerListHead ;
        ListNode *largerListHead = new ListNode(INT_MAX), *largerListTail = largerListHead;
        
        auto curr = head;
        while(curr!=NULL){
            if(curr->val < x){
                auto temp = curr->next;
                curr->next = NULL;
                smallerListTail->next = curr;
                smallerListTail = curr;
                curr = temp;
            }else{
                auto temp = curr->next;
                curr->next = NULL;
                largerListTail->next = curr;
                largerListTail = curr;
                curr = temp;
            }
        }
        
        smallerListTail->next = largerListHead->next;
        return smallerListHead->next;
    }
};