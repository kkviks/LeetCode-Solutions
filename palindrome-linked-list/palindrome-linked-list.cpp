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
    ListNode* endOfFirstHalf(ListNode* head){
        auto fast=head, slow = head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL, *curr = head;
        while(curr!=NULL){
            auto temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* endFirst = endOfFirstHalf(head);
        ListNode *secondHalfHead = reverseList(endFirst->next);
        
        auto p1 = head, p2 = secondHalfHead;
        while(p2!=NULL){
            if(p1->val != p2->val)return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};