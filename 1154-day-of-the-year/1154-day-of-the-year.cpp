class Solution {
public:
    int dayOfYear(string data) {
        const int year = atoi(data.substr(0,4).c_str());
        const int month = atoi(data.substr(5,2).c_str());
        const int day = atoi(data.substr(8,2).c_str());
        return get_days(year, month, day);
    }
    
    int get_days(int year, int month, int day){
        int res = 0;
        int month_days[12] = {31, 28 + !!is_leap(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int m=1;m<month;m++){
            res += month_days[m-1];
        }
        
        return res += day;
    }
    
    bool is_leap(int year)
{
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0)
        return true;
 
    // Else If a year is multiple of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;
 
    // Else If a year is multiple of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
}
};