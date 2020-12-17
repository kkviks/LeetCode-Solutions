class Solution {
public:
    int mySqrt(int n) {
        double root = n;
        double e = 1e-5;
        while(abs(root*root-n)>e){
            root = 0.5*(root + n/root);
        }
        return root;
    }
};
