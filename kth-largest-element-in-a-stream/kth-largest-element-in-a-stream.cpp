class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        int min_size =  k < nums.size()? k:nums.size();
        for(int i=0;i< min_size ; i++){
            pq.push(nums[i]);
        }
        
        if(nums.size()>k){
            for(int i=k;i<nums.size();i++){
                if(nums[i]>pq.top()){
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
    }
    
    int add(int val) {
        if(pq.size()<k){
            pq.push(val);
            return pq.top();
        }
        
        if(val>pq.top()){
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */