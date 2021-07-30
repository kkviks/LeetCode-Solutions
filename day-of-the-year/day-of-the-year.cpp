class Solution {
public:
    int dayOfYear(string date) {
        
        vector<int> v;
        stringstream line(date);
        string temp_str;
        
        while(getline(line,temp_str,'-'))
        {
            v.push_back(stoi(temp_str));
        }
        
        return findDay(v);
    }
    
    int findDay(vector<int> &v)
    {
        int year = v[0];
        int month = v[1];
        int day = v[2];
        
        unordered_map<int,int> m{
            {1,31}, {2,28}, {3,31}, {4,30},
            {5,31}, {6,30}, {7,31}, {8,31},
            {9,30}, {10,31},{11,30}, {12,31}
        };
        
        if(is_leap(year))
        {
            m[2] = 29;
        }
        
        int ans = 0;
        
        for(int i=1;i<month;i++)
        {
            ans += m[i];
        }
        
        ans += day;
        return ans;
    }
    
    bool is_leap(int year){
        if(year%400==0)
            return true;
        if(year%4==0 and year%100!=0)
            return true;
        return false;
    }
};