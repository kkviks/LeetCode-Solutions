class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        string ans = "";
        while(i>=0 or j>=0){
            int sum = carry;
            if(i>=0) sum += a[i--]-'0';
            if(j>=0) sum += b[j--]-'0';
            ans += sum % 2 ? '1':'0';
            carry = sum/2;
        }
        if(carry)ans += '1';
        i = 0, j = ans.size()-1;
        while(i<j)swap(ans[i++],ans[j--]);
        return ans;
    }
};