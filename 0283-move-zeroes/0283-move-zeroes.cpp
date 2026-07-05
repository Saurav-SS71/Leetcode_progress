class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=1,temp=0;
        while(j<nums.size()){
            if(i<j){
                if(nums[i]==0&&nums[j]!=0){
                    temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                    i++;
                    j++;
                }
                else if(nums[i]==0&&nums[j]==0){
                    j++;
                }
                else {
                    i++;
                    j++;
                }

            }
        }
        
    }
};