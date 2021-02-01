class Solution {
private:
    string reverse(string s){
        string ans = "";
        for(int i=s.size()-1;i>=0;i--){
            ans+=s[i];
        }
        return ans;
    }
public:
    string addBinary(string a, string b) {
        if(a.size()<b.size()){
            swap(a,b);
        }
        int carry = 0;
        int i = a.size()-1;
        int j = b.size()-1;
        string ans = "";
        while(i!=-1 or j!=-1){
            int sum = carry;
            if(i>=0){
                sum+=a[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=b[j]-'0';
                j--;
            }
            carry = sum > 1;
            int digit = sum%2;
            ans+=digit+'0';
        }
        if(carry)ans+='1';
        return reverse(ans);
    }
};