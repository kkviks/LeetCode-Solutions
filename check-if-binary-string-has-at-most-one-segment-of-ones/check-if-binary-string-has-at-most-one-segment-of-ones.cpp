class Solution {
public:
    bool checkOnesSegment(string s) {
        s.erase(unique(s.begin(),s.end()), s.end());
        return count(s.begin(),s.end(),'1')==1;
    }
};