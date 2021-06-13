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
        
    int find(int i, int parent[]){
        if(parent[i]==-1)return i;
        return parent[i]=find(parent[i],parent);
    }
    
    void unite(int a,int b,int parent[],int rank[]){
        int s1 = find(a,parent);
        int s2 = find(b,parent);
        if(s1!=s2){
            if(rank[s2]>rank[s1])swap(s1,s2);
            parent[s2] = s1;
            rank[s1]+=rank[s2];
        }
    }
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        int parent[10001], rank[10001];
        for(int i=0;i<10001;i++){
            parent[i] = -1;
            rank[i] = 1;
        }
        unordered_set<int> set(nums.begin(),nums.end());
        int sz = 1;
        while(head!=NULL and head->next!=NULL){
          if(set.count(head->val) and set.count(head->next->val)){
                unite(head->val,head->next->val,parent,rank);
          } 
          sz++;
          head = head->next;
        }
        int count = 0;
        for(int i=0;i<sz;i++){
            if(parent[i]==-1 and set.count(i))count++;
        }
        return count;
    }
};