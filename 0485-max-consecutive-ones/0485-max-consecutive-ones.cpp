class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0,max=0;
        while(j<nums.size()){
            if(nums[i]==1&&nums[j]==0){
                if((j-i)>max){
                    max=j-i;
                }
                j++;
                i=j;
            }
            else if(nums[i]==1&&nums[j]==1){
                j++;
            }
            else if(nums[i]==0&&nums[j]==0){
                i++;
                j++;
            }
        }
        if(j==nums.size()){
            if(max<(j-i)){
                max=j-i;
            }
        }
        return max;

        
    }
};