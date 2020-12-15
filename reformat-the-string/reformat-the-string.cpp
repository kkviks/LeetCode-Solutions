class Solution {
public:
    
    string answer(vector<char> first, vector<char> second){
        string s="";
        int i=0;
        for( i=0; i<second.size(); i++){
            s+= first[i];
            s+= second[i];
        }
        if(i==first.size()-1)s+=first[i];
        return s;
    }
    
    string reformat(string s) {
        vector<char> digits, alpha;
        
        for(char ch: s){
            if(ch>='a' and ch<='z')alpha.push_back(ch);
            else digits.push_back(ch);
        }
        
        
        int sizeDel = digits.size() - alpha.size();
   
        if( abs( sizeDel ) > 1)
            return "";
        
        string ans = (sizeDel>0? answer(digits, alpha) : answer(alpha, digits));
        return ans;
    }
};
