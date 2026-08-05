class Solution {
public:
    string largestOddNumber(string num) {
        int index=num.size()-1;
        string ans;
        for(index; index>=0; index--){
            if((num[index]-'0')%2!=0){break;}
        }
        for(int i=0; i<index+1; i++){
            ans+=num[i];
        }
        return ans;
    }
};