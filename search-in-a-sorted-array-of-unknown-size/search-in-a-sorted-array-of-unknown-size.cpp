/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        if(reader.get(0)==target)return 0;
        
        long long i = 1;
        while(i!=INT_MAX and reader.get(i)<target){
            i = i*2;
        }
        if(i==INT_MAX)return -1;
        
        int l = i/2, r = i;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            int readerVal = reader.get(mid);
            if(readerVal==target)return mid;
            else if(target>readerVal)l= mid+1;
            else r = mid-1;
        }
        
        return -1;
    }
};