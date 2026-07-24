class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int pos=nums.size()-1;
        vector<int> V(nums.size());
        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                V[pos]=(nums[i]*nums[i]);
                i++;
            }
            else{
                V[pos]=(nums[j]*nums[j]);
                j--;
            }
            pos--;
        }
        return V;
    }
};