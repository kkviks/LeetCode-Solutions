class Solution {
public:
    string addStrings(string nums1, string nums2) {
        if(nums1.size()<nums2.size()){
            string temp = nums1;
            nums1 = nums2;
            nums2 = temp;
        }
        assert(nums2.size()<=nums1.size());
        
        string s = "";
        
        int curr1 = nums1.size()-1;
        int curr2 = nums2.size()-1;
        
        int carry = 0;
        
        while(curr2!=-1){
            int c1 = nums1[curr1]-'0';
            int c2 = nums2[curr2]-'0';
            
            int sum = c1 + c2 + carry;
            carry = sum/10;
            
            char curr_ch = sum%10 + '0';
            nums1[curr1] = curr_ch;
            
            curr1--; curr2--;
        }
        
        while(curr1!=-1 and carry!=0){
            int c1 = nums1[curr1] -'0';
            int sum = c1+carry;
            carry = sum/10;
            
            nums1[curr1]=sum%10 + '0';
            curr1--;
        }
        if(carry)s+="1";
        s+=nums1;
        return s;
    }
};