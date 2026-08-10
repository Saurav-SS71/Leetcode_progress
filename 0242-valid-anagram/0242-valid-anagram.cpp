class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> V(26,0);
        if(s==t){return true;}
        for(int i=0; i<s.size(); i++){
            V[(s[i]-'a')]++;
        }
        for(int i=0; i<t.size(); i++){
            V[(t[i]-'a')]--;
        }
        for(int i=0; i<V.size(); i++){
            if(V[i]!=0){return false;}
        }
        return true;
    }
};