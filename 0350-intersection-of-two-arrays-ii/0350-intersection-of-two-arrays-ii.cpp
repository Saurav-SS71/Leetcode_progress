class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> M;
        vector<int> ans;
        for(auto& i:nums1){
            M[i]++;
        }
        for(auto& i: nums2){
            if(M[i]>0){
                ans.push_back(i);
                M[i]--;
            }
        }
        return ans;
    }
};