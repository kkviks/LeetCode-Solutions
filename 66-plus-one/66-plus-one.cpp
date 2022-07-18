class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        
        for(int i=digits.size()-1;i>=0;i--){
            int sum = carry + digits[i];
            digits[i] = sum % 10;
            carry = sum/10;
        }
        
        if(carry>0){
            vector<int> t(digits.size()+1);
            t[0] = carry;
            for(int i=1;i<t.size();i++){
                t[i] = digits[i-1];
            }
            return t;
        }
        
        return digits;
    }
};