class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n>0){
        int x=log(n)/log(4);
        float X=log(n)/log(4);
        if(x==X){
            return true;
        }
        }
        return false;
    }
};