class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k%nums.size()==0){
            return ;
        }
        else{
            k=k%nums.size();
        }

        vector<int> nums2(nums.begin() + nums.size() - k, nums.end());
        nums2.insert(nums2.end(), nums.begin(), nums.begin() + nums.size() -k);
        nums.assign(nums2.begin(), nums2.end());
        
    }
};