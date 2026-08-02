class Solution {
public:
    int mySqrt(int x) {
        long long i=1;
        long long n=1;
        while(n<=x){i++;n=i*i;}
        return (int)(i-1);
    }
};