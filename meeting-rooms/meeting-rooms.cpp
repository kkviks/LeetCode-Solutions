class Solution {
private:
    static bool comp(vector<int> const &a, vector<int> const &b){
        if(a[0]==b[0])
            return a[1]<b[1];
        return
            a[0]<b[0];
    }
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        
        if(intervals.size()<=1)
            return true;
        
        sort(intervals.begin(), intervals.end(), comp);
        
        for(int i=1;i<intervals.size();i++){
            if(intervals[i-1][1]>intervals[i][0])
                return false;
        }
        
        return true;
    }
};