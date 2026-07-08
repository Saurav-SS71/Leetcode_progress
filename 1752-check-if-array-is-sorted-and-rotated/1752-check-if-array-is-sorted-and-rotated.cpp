class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int > V(nums.begin(),nums.end());
        int k=0;
        sort(V.begin(),V.end());

        while(k<nums.size()){
            int c=0;
            for(int i=0; i<nums.size(); i++){
            if(nums[i]!=V[(i+k)%nums.size()]){
                break;
            }
            else{
                c++;
            }
            }
            if(c==nums.size()){
            return true;
        }
            k++;
        }

        return false;
        
    }
};