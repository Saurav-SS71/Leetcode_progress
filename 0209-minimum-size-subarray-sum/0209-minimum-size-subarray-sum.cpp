class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     // Brute force sol
     // stand at 0th index and inc the subarray if sum>= target break 
     // then stand at 1st index and do same
     // return minimum of sub array length


    // better 
    // two pointer i and j, sliding window

    int SUM=0,maxi=0;
    for(int index=0; index<nums.size(); index++){
        if(maxi<nums[index]) maxi=nums[index];
        SUM+=nums[index];
    }
    if(SUM<target){
        return 0;
    }
    if(maxi>=target){
        return 1;
    }

    int i=0,j=0;
    int sum=0,ans=nums.size();
    while(i<nums.size()&&j<nums.size()){
        sum+=nums[j];
        while(sum>=target){
            if(ans>(j-i+1)) ans=j-i+1;
            sum=sum-nums[i];
            i++;
        }
        j++;
    }
    return ans;
    }
};