class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        list<int> ls(nums.begin(),nums.end());
        while(j<nums.size()){
            if(*next(ls.begin(),i)==0){
                auto it=ls.begin();
                advance(it,i);
                ls.erase(it);
                ls.push_back(0);
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        nums.assign(ls.begin(), ls.end());
    }
};