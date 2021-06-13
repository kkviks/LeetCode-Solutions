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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        int count = 0;
        bool prevInSet = false;
        while(head!=NULL){
            if(prevInSet and set.count(head->val)==0)prevInSet = false;
            else if(prevInSet==false and set.count(head->val))prevInSet=true,count++;
            head = head->next;
        }
        return count;
    }
};