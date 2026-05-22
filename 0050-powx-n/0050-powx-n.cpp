class Solution {
public:
    double myPow(double x, int n) {
        int a=0;
        double b=1;

        if(x==0){
            return 0;
        }

        else{

        if(n>=0){

            if(n==1){
                return x;
            }
            
            else if(n==0){
                return 1;
            }

            else {

            if (n%2==0){
                return myPow(x*x,n/2);
            }
            else{
                a=(n-1)/2;
                b=myPow(x,a);

                return b*myPow(x,n-a);
            }
            }
        }
        else{

            if(n==-2147483648){
                return x*myPow(1/x,2147483647);
            }
            
            else{
                return myPow(1/x,-n);
            }
        }
        }
    }
    
};