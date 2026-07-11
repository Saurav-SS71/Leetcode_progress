class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> M;
        int n=0,c=0;

        for(int i=0; i<nums.size(); i++){
            n=n+nums[i];
            if(n==k){
                c++;
            }
            if(M.find(n-k)!=M.end()){
                c+=M[n-k];
            }
            M[n]++;
        }
        return c;
    }
};