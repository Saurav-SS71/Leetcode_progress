class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max = (nums[0]-1)*(nums[1]-1);
        if(nums[nums.size()-1]*nums[nums.size()-2]>max){
            return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        }
        else{
            return max;
        }
        return 0;
    }
};