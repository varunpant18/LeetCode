class Solution {
public:
    double myPow(double x, double n) {
        if(n==0)
        {
            return 1;
        }
        return pow(x, n-1)*x;
    }
};