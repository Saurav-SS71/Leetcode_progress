class Solution {
public:
    bool isPowerOfTwo(int n) {
        double x;
        if(n>0){x=log2(n);
        if(x==(long long)x){return true;}
        }
        return false;
    }
};