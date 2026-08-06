class Solution {
public:
    int smallestNumber(int n, int t) {
        int product=1;
        while(true){
            int x=n;
        while(x>0){
            product*=(x%10);
            x/=10;
        }
        if(product%t==0){
            return n;
        }
        else {n++;product=1;}
        }
        return 0;
    }
};