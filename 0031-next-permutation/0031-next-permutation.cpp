class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool np=next_permutation(nums.begin(), nums.end());
        if(np==false){
            sort(nums.begin(),nums.end());
        }
    }
};