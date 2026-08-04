class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int L=1,H=piles[0],ans=0;
        for(int i=1; i<piles.size(); i++){
            if(H<piles[i]){
                H=piles[i];
            }
        }
        long long mid=(L+H)/2,TotalHour=0;
        while(L<=H){
            for(int i=0; i<piles.size(); i++){
                TotalHour+= (piles[i]+mid-1)/mid;
            }
            if(TotalHour<=h){ans=mid;
                H=mid-1;TotalHour=0;
            }
            else{
                L=mid+1;TotalHour=0;
            }
            mid=(L+H)/2;
        }
        return ans;
    }
};