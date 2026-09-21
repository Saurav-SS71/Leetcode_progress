class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> nums=score;
        vector<string> ans(nums.size());
        int c=1;
        sort(nums.begin(),nums.end());
        for( int i=nums.size()-1; i>=0; i--){
            for( int j=0; j<score.size(); j++){
                if(score[j]==nums[i]){
                    if(c<4){
                        if(c==1){
                            ans[j]="Gold Medal";
                        }
                        else if(c==2){
                            ans[j]="Silver Medal";
                        }
                        else if(c==3){
                            ans[j]="Bronze Medal";
                        }
                    }
                    else{
                        ans[j]=to_string(c);
                    }
                    c++;
                }
            }
        }
        return ans;
    }
};