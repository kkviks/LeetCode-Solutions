/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        
        const int DUMMY_DATA = INT_MIN;
        const bool HAS_LOOP = true;
        const bool NO_LOOP = false;
        
        ListNode* dummy = new ListNode(DUMMY_DATA);
        ListNode* curr = head;
        
        while(curr!=NULL){
            auto nextNode = curr->next;
            if(curr->next==dummy)return HAS_LOOP;
            else curr->next = dummy;
            curr = nextNode;
        }
        return NO_LOOP;
    }
};