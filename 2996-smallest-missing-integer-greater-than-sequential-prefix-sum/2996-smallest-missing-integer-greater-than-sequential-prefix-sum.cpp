class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0],c=0;
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1){
                sum=sum+nums[i+1];
            }
            else {break;}
        }
        while(true){
            c=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==sum){
                    sum++;c=1;break;
                }
            }
            if(c==0){break;}
        }
        return sum;
    }
};