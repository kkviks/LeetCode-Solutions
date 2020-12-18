class Solution {
public:
    
    string to_binary(int n){
        string s= "";
        while(n){
            s+=to_string(n%2);
            n/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    
    string flip(string s){
        string ans = "";
        for(char ch:s){
            if(ch=='0')ans+="1";
            else ans+="0";
        }
        return ans;
    }
    
    int to_num(string s){
        int ans = 0;
        long i=1;
        for(auto it = s.rbegin(); it!=s.rend();it++){
            ans += (*it-'0')*i;
            i*=2;
        }
        return ans;
    }
    
    int findComplement(int num) {
        string bin = to_binary(num);
        int x = to_num(flip(bin));
        return x;
    }
};
