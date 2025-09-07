class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(N<0){
            x = 1/x;
            N = -N;
        }
        return binexp(x, N);
    }
    double binexp(double x, long long n){
        if(n == 0) return 1.0;
        double half = binexp(x, n/2);

        if(n%2) return half*half*x;
        else return half*half;
    }
};