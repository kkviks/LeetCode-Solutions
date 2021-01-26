/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    pair<ListNode*,ListNode*> reverse(ListNode* head){
        if(head==NULL)return {NULL,NULL};
        if(head->next == NULL)return {head,head};
        
        auto smallOutput = reverse(head->next);
        auto smallHead = smallOutput.first;
        auto tail = smallOutput.second;
        
        smallHead->next = head;
        head->next = NULL;
        
        return {head,tail};
    }
​
public:
    ListNode* reverseList(ListNode* head) {
        return reverse(head).second;
    }
};
