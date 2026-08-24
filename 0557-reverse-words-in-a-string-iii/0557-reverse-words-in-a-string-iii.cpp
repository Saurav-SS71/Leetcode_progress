class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string temp;
        for( char i:s){
            if( i==' '){
                ans = ans+ temp + ' ';temp.clear();
            }
            else{
                temp = i + temp;
            }
        }
        ans = ans + temp;
        return ans;
    }
};