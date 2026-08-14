class Solution {
public:
    int maximumLengthSubstring(string s) {
        if(s.size()==2){return 2;}
        unordered_map<char,int> M;
        int left=0,ans=0;
        for( int i=0; i<s.size(); i++){
            M[s[i]]++;
            while(M[s[i]]>2){
                M[s[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};