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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        
        bool oddTurn = true;
        ListNode *oddHead = NULL, *oddTail = NULL,  *evenHead = NULL, *evenTail =NULL;
        ListNode* curr = head;
        
        while(curr!=NULL){
            if(oddTurn){
                auto temp = curr->next;
                curr->next = NULL;
                if(oddHead==NULL){
                    oddHead = oddTail = curr;
                }
                else{
                    oddTail->next = curr;
                    oddTail = curr;
                }
                
                curr = temp;
            }else{
                auto temp = curr->next;
                curr->next = NULL;
                if(evenHead==NULL){
                    evenHead = evenTail = curr;
                }
                else{
                    evenTail->next = curr;
                    evenTail = curr;
                }
                
                curr = temp;
            }
            
            oddTurn = !oddTurn;
        }
        
        oddTail->next = evenHead;
        return oddHead;
    }
};