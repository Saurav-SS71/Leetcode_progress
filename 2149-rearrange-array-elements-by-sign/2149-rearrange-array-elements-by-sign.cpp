class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> V1,V2,V3;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                V1.push_back(nums[i]);
            }
            if(nums[i]<0){
                V2.push_back(nums[i]);
            }
        }
        for(int i=0; i<nums.size()/2; i++){
            V3.push_back(V1[i]);
            V3.push_back(V2[i]);
        }
        return V3;
    }
};