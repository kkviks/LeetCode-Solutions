class Solution {
public:
    int reverse(int x) {
        int sign = x<0?-1:1;
        try{
            string s = to_string(abs(x));
            string rev ="";
            for(int i=s.size()-1;i>=0;i--){
                rev+=s[i];
            }
            int ans = stoi(rev);
            return sign*ans;
        }catch(out_of_range e){
            return 0;
        }
    }
};