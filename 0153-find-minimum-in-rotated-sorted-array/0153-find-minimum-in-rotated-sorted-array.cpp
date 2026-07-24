class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, high=nums.size()-1, mid=(low+high)/2;
        while(low<=high){
            if(nums[low]<=nums[mid]&&nums[mid]<=nums[high]){
                return nums[low];
            }
            else if(nums[low]>=nums[mid]&&nums[mid]>=nums[high]){
                return nums[high];
            }
            else if(nums[low]<=nums[mid]&&nums[mid]>=nums[high]){
                low=mid;
            }
            else{
                high=mid;
            }
            mid=(low+high)/2;
        }
        return 0;
    }
};