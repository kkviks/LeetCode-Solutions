class Solution {
    struct Comp{
        int *freq;
        Comp(int *a){
            freq = a;
        }
        
        bool operator()(char a, char b){
            if(freq[a]==freq[b])return a<b;
            return freq[a]>freq[b];
        }
    };
    
public:
    string frequencySort(string s) {
        //Bruteforce Solution
        int freq[256];
        memset(freq,0,sizeof freq);
        
        for(char ch:s){
            freq[ch]++;
        }
        
        sort(begin(s),end(s), Comp(freq));
        return s;
    }
};