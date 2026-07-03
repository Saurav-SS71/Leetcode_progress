class Solution {
public:
    int fib(int n) {
    static int fib_arr[31]={0,1,0};

    if(n<=1){
        return n;
    }
    else{
        if(fib_arr[n]!=0){
            return fib_arr[n];
        }
        else{
            fib_arr[n]= fib(n-2) + fib(n-1);
            return fib_arr[n];
        }
    }
    return 0;
    }
};