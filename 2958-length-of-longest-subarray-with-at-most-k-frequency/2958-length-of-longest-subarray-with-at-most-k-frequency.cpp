class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> M;
        int left=0,ans=0;
        for(int right=0; right<nums.size(); right++){
            M[nums[right]]++;
            while(M[nums[right]]>k){
                M[nums[left]]--;left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};