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
private:
    pair<ListNode*,int> reverseList(ListNode* head){
        ListNode* prev = NULL, *curr = head;
        int count = 0;
        while(curr!=NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            count++;
        }
        return {prev,count};
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto p1 = reverseList(l1);
        auto p2 = reverseList(l2);
        ListNode* largerCurr=p1.first, *smallerCurr=p2.first, *prev=NULL, *head=NULL;
        int carry = 0;
        
        if(p2.second>p1.second){
            swap(largerCurr,smallerCurr);
        }
        
         head = largerCurr;
        
        while(largerCurr!=NULL){
            int sumOfDigits = largerCurr->val + carry;
            if(smallerCurr!=NULL)sumOfDigits += smallerCurr->val;
            carry = sumOfDigits/10;
            sumOfDigits %=10;
            largerCurr->val= sumOfDigits;
            prev = largerCurr;
            largerCurr = largerCurr->next;
            if(smallerCurr!=NULL)smallerCurr = smallerCurr->next;
        }
        
        if(carry!=0){
            ListNode* newNode = new ListNode(carry);
            if(prev!=NULL)prev->next = newNode;
        }
        
        return reverseList(head).first;
    }
};