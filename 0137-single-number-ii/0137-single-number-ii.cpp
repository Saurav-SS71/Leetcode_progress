class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=1,k=2;
        while((k<nums.size())){
            if(nums[i]==nums[j]&&nums[j]==nums[k]){
            i=i+3;j+=3;k+=3;
            }
            else{
                break;
            }
        }
        return nums[i];
    }
};