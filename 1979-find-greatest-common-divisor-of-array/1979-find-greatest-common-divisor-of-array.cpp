class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int gcd,i=1;
        if((nums[nums.size()-1])%nums[0]==0){gcd=nums[0];return gcd;}
        while(i<=nums[0]){
            if(nums[nums.size()-1]%i==0&&nums[0]%i==0){gcd=i;}
            i++;
        }
        return gcd;
    }
};