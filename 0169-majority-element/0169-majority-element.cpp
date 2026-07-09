class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()>1){
        for(int i=0; i<nums.size()-1; i++){
            int j=i,c=0;
            while(j<(nums.size()-1)&&nums[j]==nums[j+1]){
                c++;
                j++;
            }
            if(c>=((nums.size()+1)/2)-1){
                return nums[i];
                break;
            }
        }
        }
        else{
            return nums[0];
        }
        
        return 0;
    }
};