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
    
    struct comp{
        bool operator()(pair<int,ListNode*> const &p1, pair<int,ListNode*> const &p2){
            return p1.first > p2.first;
        }
    };
    
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = NULL, *tail = NULL;
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>, comp> pq;
        
        int k = lists.size();
        
        for(int i=0;i<k;i++){
            auto curr = lists[i];
            if(curr)pq.push({curr->val,curr});
        }
        
        while(!pq.empty()){
            auto top = pq.top(); pq.pop();
            auto curr = top.second;
            if(head==NULL){
                head = top.second;
                tail = head;
            }else{
                tail->next = top.second;
                tail = tail->next;
            }
            if(curr->next)pq.push({curr->next->val,curr->next});
        }
        
        return head;
    }
};