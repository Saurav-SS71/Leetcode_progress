class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int a=0,j=strs[0].size(),b=0,B=0;
        string str;
        for(int k=0;k<strs.size();k++){
            if(j>strs[k].size()){j=strs[k].size();}
        }
        while(b<j){
            str+=strs[0][b];
            for(a;a<strs.size();a++){
                if(str[str.size()-1]!=strs[a][b]){
                    str.pop_back();B=1;break;
                }
            }
            a=0;
            b++;
            if(B==1){break;}
        }
        return str;
    }
};