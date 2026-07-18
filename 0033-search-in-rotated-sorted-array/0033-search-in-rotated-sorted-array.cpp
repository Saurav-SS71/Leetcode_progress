class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        int mid=(low+high)/2;
        if(nums.size()>1){
        while(low<=high){
            if(nums[low]<=nums[mid]){
                if(target==nums[low]){return low;}
                if(target==nums[mid]){return mid;}
                if(target>nums[low]&&target<nums[mid]){high=mid-1;}
                else{low=mid+1;}
            }
            else{
                if(target==nums[mid]){return mid;}
                if(target==nums[high]){return high;}
                if(target>nums[mid]&&target<nums[high]){low=mid+1;}
                else{high=mid-1;}
            }
            mid=(low+high)/2;
        }
        }
        else if(nums[0]==target){
            return 0;
        }
        return -1;

    }
};