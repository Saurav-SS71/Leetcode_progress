class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0, profit=0;
        for(int i=0; i<prices.size()-1; i++){
            diff+=prices[i+1]-prices[i];

            if(diff>profit){
                profit=diff;
            }

            if(diff<0){
                diff=0;
            }
        }
        return profit;
    }
};