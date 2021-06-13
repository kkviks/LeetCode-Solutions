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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = NULL;
        //prev->next = head;
        
        
        for(auto curr = head,curr2 = curr; curr!=NULL; curr = curr2->next){
            curr2 = curr;
            while(curr2!=NULL and curr2->val == val){
                curr2 = curr2->next;
            }
            if(prev==NULL){
                prev=curr2;
                head = prev;
            }
            else prev->next = curr2;
            prev = curr2;
            if(curr2==NULL)break;
        }
        
        return head;
    }
};