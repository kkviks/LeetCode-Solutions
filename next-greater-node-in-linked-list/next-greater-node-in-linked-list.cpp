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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        for(auto i=head;i!=NULL;i=i->next){
            int max_val = i->val;
            for(auto j=i->next;j!=NULL;j=j->next){
                if(j->val>i->val){
                    max_val = j->val;
                    break;
                }
            }
            if(max_val>i->val)v.push_back(max_val);
            else v.push_back(0);
        }
        return v;
    }
};