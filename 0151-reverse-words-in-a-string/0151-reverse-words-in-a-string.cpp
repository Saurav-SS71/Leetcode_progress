class Solution {
public:
    string reverseWords(string s) {
        string str;
        int j=0,c=0,k=0;
        vector<vector<string>> V;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' '){
                V.resize(j+1);
                V[j].resize(k+1);
                V[j][k]=s[i];c=1;k++;
            }
            else if(c==1&&s[i]==' '){
                j++;c=2;k=0;
            }
        }
        for(int i=V.size()-1; i>=0; i--){
            if(i!=V.size()-1){
            str+=' ';
            }
            for(int k=0; k<V[i].size(); k++){
                str+=V[i][k];
            }
        }

        return str;
    }
};