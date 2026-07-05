class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[i]==0){
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        // list<int> ls;
        // ls.assign(nums.begin(), nums.end());

        // while(i<){
        //     if(nums[i]==0){
        //         auto it= ls.begin();
        //         advance(it,i);
        //         ls.erase(it);
        //         ls.push_back(0);
        //     }
        // }
        // nums.assign(ls.begin(), ls.end());
    }
};