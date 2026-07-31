class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> V(nums.size()+1,0);
        for(int i=0; i<nums.size(); i++){
            V[nums[i]]++;
        }
        for(int i=0; i<=nums.size(); i++){
            if(V[i]==0){
                return i;
            }
        }
        return 0;
    }
};