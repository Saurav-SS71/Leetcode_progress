class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> V;
        unordered_map < int, int> dat;
        
        for(int i=0; i<nums.size(); i++){
            dat[nums[i]]=i;
        }
        for(int i=0; i<nums.size(); i++){
            if(dat.find(target - nums[i])!=dat.end()&&(i!=dat[target-nums[i]])){
                V.push_back(i);
                V.push_back(dat[target-nums[i]]);
                break;
            }
        }
        return V;
    }
};