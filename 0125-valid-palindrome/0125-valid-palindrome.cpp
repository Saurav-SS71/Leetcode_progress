class Solution {
public:
    bool isPalindrome(string s) {
        string temp_str="";
        int i=0;
        
        for(char c: s){
            if((c>=65&&c<=90)||(c>=97&&c<=122)||(c>=48&&c<=57)){
                temp_str+=tolower(c);
            }
        }
        if(temp_str.length()==1){
            return true;
        }
        else {
        while(i<temp_str.length()/2){
            if(temp_str[i]!=temp_str[temp_str.length()-1-i]){
                return false;
            }
            i++;
        }
        }
        return true;
    }
};