class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0,j=0,k=nums.size()-1;
        sort(nums.begin(),nums.end());
        vector<vector<int>> V;

        for(int i=0;(i<nums.size()-1);i++){
            if(i>0 && nums[i]==nums[i-1]){continue;}
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                
                if(sum==0){
                    V.push_back({nums[i],nums[j],nums[k]});
                    j++;k--;
                    while(j<k&&nums[j]==nums[j-1]){j++;}
                    while(j<k&&nums[k]==nums[k+1]){k--;}
                }
                if(sum<0){
                    j++;
                }
                if(sum>0){
                    k--;
                }
            }
            
        }
        return V;
    }
};