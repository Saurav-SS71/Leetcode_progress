class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        string str;
        for(char i:s){
            if(i=='('){c++;}
            else if(i==')'){c--;}
            if(c!=0){
                if(c==1&&i==')'){
                    str=str+i;
                }
                else if(c!=1){
                    str=str+i;
                }
                else if(c==1&&i=='('){continue;}
            }
        }
        return str;
    }
};