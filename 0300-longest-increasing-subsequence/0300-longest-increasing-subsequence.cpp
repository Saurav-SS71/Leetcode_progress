class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> V;
        V.push_back(nums[0]);
        for( int i=1; i<nums.size(); i++){
            if(nums[i]>V.back()){
                V.push_back(nums[i]);
            }
            else{
                int index=lower_bound(V.begin(),V.end(),nums[i])-V.begin();
                V[index]=nums[i];
            }
        }
        return V.size();
    }
};