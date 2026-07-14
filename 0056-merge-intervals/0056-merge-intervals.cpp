class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> V;

        for(int i=0; i<intervals.size(); i++){
            if(V.empty()||V.back()[1]<intervals[i][0]){
                V.push_back(intervals[i]);
            }
            else{
                V.back()[1]={max(V.back()[1],intervals[i][1])};
            }
        }
        return V;
    }
};