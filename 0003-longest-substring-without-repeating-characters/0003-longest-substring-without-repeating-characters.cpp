class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,left=0;
        unordered_map<int,int> M;
        for( int right=0; right<s.size(); right++){
            M[s[right]]++;
            while(M[s[right]]>1){
                M[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};