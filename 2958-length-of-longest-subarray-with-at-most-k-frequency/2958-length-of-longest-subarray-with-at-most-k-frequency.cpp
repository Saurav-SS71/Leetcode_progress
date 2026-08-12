class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0,ans=j-i+1;
        unordered_map<int , int> M;
        while(i<=j&&j<nums.size()){
            if(M.find(nums[j])==M.end()){
                M[nums[j]]++;
                if(ans<(j-i+1)){ans=j-i+1;}
                j++;
            }
            else if ( M.find(nums[j])!=M.end()){
                if(M[nums[j]]<k){
                    M[nums[j]]++;
                    if(ans<(j-i+1)){ans=j-i+1;}
                    j++;
                }
                else{
                    while(M[nums[j]]>=k){
                        M[nums[i]]--;
                        i++;
                    }
                    if(ans<(j-i+1)){ans=j-i+1;}
                }
            }
        }
        return ans;
    }
};