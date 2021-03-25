class Solution {
public:
    vector<int> singleNumber(vector<int>& a) {
        
        int xorOfAll = a[0];
        
        for(int i=1;i<a.size();i++)
        {
            xorOfAll ^= a[i];
        }
        
        int diffBitIdx = 0;
        
        for(int i=0;i<32;i++)
        {
            if(xorOfAll & (1<<i))
            {
                diffBitIdx = i;
                break;
            }
        }
        
        int firstNum = 0, secondNum = 0;
        int mask = 1 << diffBitIdx;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] & mask)
            {
                firstNum ^= a[i];
            }
            else
            {
                secondNum ^= a[i];
            }
        }
        
        return {firstNum,secondNum};
        
    }
};