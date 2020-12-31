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
    int to_decimal(string s){
        int num = 0;
        for(int i=0, po = s.size()-1;i<s.size();i++, po--){
            int x = (s[i]-'0');
            num += x<<po;
        }
        return num;
    }
    
public:
    int getDecimalValue(ListNode* head) {
        ListNode* curr = head;
        string s = "";
        while(curr!=NULL){
            s+=to_string(curr->val);
            curr = curr->next;
        }
        cout << s << endl;
        int ans = to_decimal(s);
        return ans;
    }
