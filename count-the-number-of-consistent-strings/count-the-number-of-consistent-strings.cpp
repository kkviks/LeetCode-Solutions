class Solution {
private:
    bool f(string s, string allowed){
        unordered_set<char> set;
        for(char ch:allowed)set.insert(ch);
        for(char ch:s)if(set.count(ch)==0)return false;
        return true;
    }
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for(string s: words){
            if(f(s,allowed))count++;
        }
        return count;
    }
};