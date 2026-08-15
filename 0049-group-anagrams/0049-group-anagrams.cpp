class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> keyV;
        int k=0;
        for(int i=0; i<strs.size(); i++){
            string ss=strs[i];
            sort(ss.begin(),ss.end());
            if(keyV.find(ss)==keyV.end()){
                keyV[ss]=k++;
            }
        }
        vector<vector<string>> ans;
        ans.resize(k);
        for( int i=0; i<strs.size(); i++){
            string ss=strs[i];sort(ss.begin(),ss.end());
            ans[keyV[ss]].push_back(strs[i]);
        }
        return ans;
    }
};