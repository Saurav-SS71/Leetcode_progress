class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> V;
        unordered_map < int, int> dat;
        
        for(int i=0; i<nums.size(); i++){
            if(dat.find(target - nums[i])!=dat.end()){
                V.push_back(dat[target-nums[i]]);
                V.push_back(i);
                break;
            }
            dat[nums[i]]=i;
        }
        return V;
    }
};