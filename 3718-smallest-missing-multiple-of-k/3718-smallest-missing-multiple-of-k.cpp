class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=1,ans=0;
        while(true){
            if(find(nums.begin(),nums.end(),n*k)==nums.end()){
                ans=n*k;break;
            }
            n++;
        }
        return ans;
    }
};