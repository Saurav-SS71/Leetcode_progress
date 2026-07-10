class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()>1){
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==target){
                return i;
            }
            if(nums[i+1]==target){
                return i+1;
            }
            if(target>nums[i]&&target<nums[i+1]){
                return i+1;
            }
        }
        }
        if(nums[0]>=target){
            return 0;
        }
        
        return nums.size();    
    }
};