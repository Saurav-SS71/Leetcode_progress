class Solution {
public:
    int reverse(int x) {
        int results=0,rem=0;
        while(x!=0){
            rem=x%10;
            x=x/10;

            if(results>INT_MAX/10||(results==INT_MAX/10&&rem>8)){
                return 0;
            }
            if(results<INT_MIN/10||(results==INT_MIN/10&&rem<-8)){
                return 0;
            }
            results= 10*results + rem;
        }
       
    return results;

        
        
    }
};