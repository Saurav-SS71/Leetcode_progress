class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0,major=nums[0],c=0;
        while(i<nums.size()){
            if(major==nums[i]){
                c++;
            }
            else{
                c--;
            }
            if(c==0){
                major=nums[i+1];
            }
            i++;
        }
        return major;
    }
};