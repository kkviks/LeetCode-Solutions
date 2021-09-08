class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ans = keysPressed[0];
        int max_duration = releaseTimes[0];
        
        for(int i=1;i<keysPressed.size();i++){
            int duration = releaseTimes[i]-releaseTimes[i-1];
            char ch = keysPressed[i];
            if(duration>=max_duration){
                if(duration==max_duration and ch > ans){
                    ans = ch;
                }else if(duration>max_duration){
                    ans = ch;
                    max_duration = duration;
                }
            }
        }
        
        return ans;
    }
};