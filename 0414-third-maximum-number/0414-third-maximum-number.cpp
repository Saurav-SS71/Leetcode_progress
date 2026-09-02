class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> V;
        for( int i=0; i<nums.size(); i++){
            if(find(V.begin(),V.end(),nums[i])==V.end()){
                V.push_back(nums[i]);
            }
        }
        sort(V.begin(),V.end());
        if(V.size()<3){
            if(V.size()==2){
                if(V[0]>V[1]){
                    return V[0];
                }
                else return V[1];
            }
            else return V[0];
        }
        return V[V.size()-3];
    }
};