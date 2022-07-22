class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        unordered_map<char,int> m = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        
        for(int i=0; i<s.size();i++){
            if(i < s.size()-1){
                char p = s[i];
                char n = s[i+1];
                if(p=='I' and n=='V'){ ans += 4; i++; }
                else if(p=='I' and n=='X'){ ans += 9; i++;}
                else if(p=='X' and n=='L'){ ans += 40; i++;}
                else if(p=='X' and n=='C'){ ans += 90; i++;}
                else if(p=='C' and n=='D'){ ans += 400; i++;}
                else if(p=='C' and n=='M'){ ans += 900; i++;}
                else ans += m[p];    
                } else ans += m[s[i]];
            }
        return ans;
        }
    };