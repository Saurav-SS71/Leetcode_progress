class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> V;
        int c=0;
        for(int i=0 ; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i!=j){
                    if(nums[i]+nums[j]==target){
                        V.push_back(i);
                        V.push_back(j);
                        c=1;
                        break;
                    }
                }
            }
            if(c==1){
                break;
            }
        }
        return V;
        
    }
};