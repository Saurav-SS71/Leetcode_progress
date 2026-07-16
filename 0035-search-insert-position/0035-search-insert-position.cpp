class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L=0,R=nums.size()-1,ans=nums.size();
        while(L<=R){
            int mid=(L+R)/2;
            if(nums[mid]>=target){ans=mid;R=mid-1;}
            else{L=mid+1;}
        }
        return ans;
    }
};