class Solution {
private:
    char binarySearch(vector<char> &a, char x){
        int l = 0, r = a.size();
        while(l<r){
            int mid = l + (r-l)/2;
            if(x>=a[mid]) l = mid+1;
            else r = mid;
        }
        return a[l%a.size()];
    }
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        return binarySearch(letters, target);
    }
};