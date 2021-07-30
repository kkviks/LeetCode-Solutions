class Solution {
public:
    int badSensor(vector<int>& s1, vector<int>& s2) {
        
        bool firstFaulty = isFaulty(s1,s2);
        bool secondFaulty = isFaulty(s2,s1);
        
        if(firstFaulty and secondFaulty){
            return -1;
        }else if(firstFaulty){
            return 1;
        }else if(secondFaulty){
            return 2;
        }else {
            return -1;
        }
    }
    
    bool isFaulty(vector<int> &s1, vector<int> &s2)
    {
        //first is faulty
        int n = s1.size();
        if(n==1)return true;
        int i = n-2, j = n-1;
        int skips = 0;
        
        while(i>=0){
            if(s1[i]!=s2[j])
            {
                skips++;
                if(skips>1)
                    break;
                j--;
                continue;
            }
            i--, j--;
        }
        
        return skips <= 1;
    }
};