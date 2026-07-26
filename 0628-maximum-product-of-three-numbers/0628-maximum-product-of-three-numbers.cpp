class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        if(nums[0]*nums[1]*nums[nums.size()-1]>max){
            return nums[0]*nums[1]*nums[nums.size()-1];
        }
        else {return max;}
        return 0;
    }
};