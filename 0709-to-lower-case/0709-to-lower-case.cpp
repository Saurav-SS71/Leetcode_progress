class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size(); i++){
            if((s[i]+32>=97)&&(s[i]+32<=122)){
                s[i]=s[i]+32;
            }
        }
        return s;
    }
};