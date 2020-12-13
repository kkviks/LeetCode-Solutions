class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0;
        
        for(string s:words){
            bool flag = true;
            for(char ch: s){
                if(find(allowed.begin() ,allowed.end(), ch) == allowed.end()){
                    flag = false;
                    break;
                }
            }
            if(flag)
                cnt++;
        }
        return cnt;
    }
};
