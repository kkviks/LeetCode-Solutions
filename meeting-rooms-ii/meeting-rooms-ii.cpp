class Solution {
    struct COMP{
      bool operator()(vector<int> &a, vector<int> &b)
      {
          return a[1]>b[1];
      }
    };
public:
    int minMeetingRooms(vector<vector<int>>& a) {
        
        sort(a.begin(),a.end());
        
        int rooms = 1;
        priority_queue<vector<int>,vector<vector<int>>, COMP> pq;
        pq.push(a[0]);
        
        for(int i=1;i<a.size();i++)
        {
            if(clash(pq.top(),a[i])==false)
            {
                pq.pop();
                pq.push(a[i]);
            }else
            {
                pq.push(a[i]);
                rooms++;
            }
        }
        
        return rooms;
    }
    
    bool clash(vector<int> const &a, vector<int> const &b)
    {
        if(a[1]>b[0])
            return true;
        
        return false;
    }
};