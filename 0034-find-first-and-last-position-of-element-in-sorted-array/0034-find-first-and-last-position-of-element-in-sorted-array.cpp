class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> V(2,-1);
        int L=0,R=nums.size()-1;
        while(L<=R){
            int mid=(L+R)/2;
            if(nums[mid]==target){V[0]=mid;R=mid-1;}
            else if(nums[mid]>target){R=mid-1;}
            else if(nums[mid]<target){L=mid+1;}
        }
        L=0;R=nums.size()-1;
        while(L<=R){
            int mid=(L+R)/2;
            if(nums[mid]==target){V[1]=mid;L=mid+1;}
            else if(nums[mid]>target){R=mid-1;}
            else if(nums[mid]<target){L=mid+1;}
        }
        return V;
    }
};