class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=nums[0],high=0;
        for(auto i:nums){
            if(low<i) low=i;
            high+=i;
        }
        int mid=(low+high)/2;
        while(low<=high){
            int countPartition=1;
            int sum=0;
            for  ( int i=0; i< nums.size() ; i++){
                sum+=nums[i];
                if(sum>mid){
                    sum=nums[i];
                    countPartition++;
                }
            }
            if( countPartition >k){
                low=mid+1;
            }
            else {
                high= mid-1;
            }
            mid=(low+high)/2;
        }
        return low;
    }
};