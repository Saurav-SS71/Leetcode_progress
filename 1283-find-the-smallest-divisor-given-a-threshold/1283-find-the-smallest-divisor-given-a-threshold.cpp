class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int L=1,H=0;
        for(int i=0; i<nums.size(); i++){
            if(H<nums[i]){H=nums[i];}
        }
        int  mid=(L+H)/2,ans=0;
        while(L<=H){
            int c=0;
            for(int i=0; i<nums.size(); i++){
                c = c + (nums[i]+mid-1)/mid;
            }
            if(c<=threshold){
                ans=mid;
                H=mid-1;
            }
            else{
                L=mid+1;
            }
            mid=(L+H)/2;
        }
        return ans;
    }
};