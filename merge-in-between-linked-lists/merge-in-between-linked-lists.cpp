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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *curr = list1;
        for(int i=0;i<a-1;i++){
            curr = curr->next;
        }
        auto temp = curr->next;
        curr->next = list2;
        
        while(curr->next!=NULL){
            curr = curr->next;
        }
        
        for(int i=0;i<b-a+1;i++){
            temp = temp->next;
        }
        
        curr->next=temp;
        return list1;
    }
};