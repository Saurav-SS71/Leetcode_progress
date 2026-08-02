class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int L=1,H=nums.size()-2,mid=(L+H)/2;
        if(nums.size()==1){return 0;}
        if(nums[0]>nums[1]){return 0;}
        if(nums[nums.size()-1]>nums[nums.size()-2]){return nums.size()-1;}
        while(L<H){
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){return mid;}
            if(nums[mid]<nums[mid+1]){
                L=mid+1;
            }
            else{
                H=mid-1;
            }
            mid=(L+H)/2;
        }
        return L;
    }
};