class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        
        int count1[101] = {0};
        int count2[101] = {0};
        
        for(int &num: nums1){
            count1[num]++;
        }
        
        for(int &num: nums2){
            count2[num]++;
        }
        
        int j = 100;
        int i = 0;
        int sum = 0;
        
        while(i<=100){
            
            while(i<=100 and count1[i]==0)i++;
            while(j>=0 and count2[j]==0)j--;
            
            if(i<=100 and j>=0){
                sum += i*j;
                count1[i]--;
                count2[j]--;
            }
        }
        
        return sum;
    }
};