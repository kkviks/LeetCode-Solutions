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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL or left==right)return head;
        ListNode* curr = head, *prevTail=NULL;
        for(int i=0;i<left-1;i++){
            prevTail = curr;
            curr = curr->next;
        }
        ListNode* newTail = curr, *prev = NULL, *newHead;
        for(int i=0;i<=right-left;i++){
            auto temp = curr->next;
            curr->next = prev;
            prev = curr;
            newHead = curr;
            curr = temp;
        }
        if(prevTail!=NULL)prevTail->next = newHead;
        else head = newHead;
        newTail->next = curr;
        return head;
    }
};