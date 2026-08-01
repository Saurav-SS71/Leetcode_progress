class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int L=1,H=nums.size()-2, mid=(L+H)/2;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            return nums[nums.size()-1];
        }
        while(L<=H){
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    L=mid+1;
                }
                else{
                    H=mid-1;
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    L=mid+1;
                }
                else{
                    H=mid-1;
                }
            }
            mid=(L+H)/2;
        }
        return nums[mid+1];
    }
};