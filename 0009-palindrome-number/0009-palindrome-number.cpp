class Solution {
public:
    bool isPalindrome(int x) {
        int temp1=0,temp2=0;
        temp2=x;

        while(temp2>0){
            if(temp1>INT_MAX/10||(temp1==INT_MAX&&(temp2%10)>8)){
                return false;
            }
            else {
            temp1=temp1*10 + temp2%10;
            }
            temp2=temp2/10;

            
        }
        if(temp1==x){
            return true;
        }
        else {
            return false;
        }
        return 0;
    }
};