class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> V;
        for( int i=0; i< nums1.size(); i++){
            for( int j=0; j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    if(find(V.begin(),V.end(),nums1[i])==V.end()){
                        V.push_back(nums1[i]);
                    }
                }
            }
        }
        return V;
    }
};