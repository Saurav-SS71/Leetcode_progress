class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=nums[0],index=0;

        for( int i=0; i<nums.size(); i++){
            if(nums[i]>max){
                max=nums[i];
                index=i;
            }
        }
        for( int i=0; i<nums.size(); i++){
            if(i==index){continue;}
            else{
                if(nums[i]*2>max){return -1;}
            }
        }
        return index;
    }
};