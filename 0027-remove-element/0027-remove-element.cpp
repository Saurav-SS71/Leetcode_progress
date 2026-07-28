class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,n=nums.size();
        while(i<nums.size()){
            if(nums[i]==val){
                nums.erase(nums.begin() + i);
                n--;
                continue;
            }
            i++;
        }
        return n;
    }
};