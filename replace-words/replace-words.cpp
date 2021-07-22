class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        
        sort(dict.begin(), dict.end());
        
        string word = "";
        string ans = "";
        
        int i=0;
        
        while(i<sentence.size())
        {
            if(sentence[i]==' ')
            {
                ans += transform(word,dict) + " ";
                word = "";
            }else{
                word += sentence[i];
            }
            i++;
        }
        
        ans += transform(word,dict);
        return ans;
    }
    
    string transform(string word,vector<string> &dict)
    {
        for(string s:dict)
        {
            if(word.find(s)==0)
                return s;
        }
        return word;
    }
};