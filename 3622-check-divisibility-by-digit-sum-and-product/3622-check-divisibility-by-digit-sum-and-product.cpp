class Solution {
public:
    bool checkDivisibility(int n) {
        int a=0,b=1,c=n;
        while(c>0){
            a=a+(c%10);
            b=b*(c%10);
            c/=10;
        }
        if(n%(a+b)==0){
            return true;
        }
        return false;
    }
};