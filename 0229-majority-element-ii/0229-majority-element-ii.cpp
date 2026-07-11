class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> M;
        vector<int> V;
        int c=0;
        sort(nums.begin(),nums.end());

        if(nums.size()>1){
        if(nums.size()==2&&(nums[0]!=nums[1])){
            V.push_back(nums[0]);V.push_back(nums[1]);
        }
        else{
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                c++;
            }
            else{c=0;}
            if((c+1)>(nums.size()/3)){
                if(find(V.begin(),V.end(),nums[i])==V.end()){
                V.push_back(nums[i]);
                }
            }
            
        }
        }
        }
        else{
            V.push_back(nums[0]);
        }

        
        return V;
    }
};