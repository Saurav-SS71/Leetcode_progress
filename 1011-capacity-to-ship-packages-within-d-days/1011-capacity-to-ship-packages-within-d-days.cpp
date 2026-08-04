class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int L=0,H=0;
        for(int i=0; i<weights.size(); i++){
            if(L<weights[i]){L=weights[i];}
        }
        for(int i=0; i<weights.size(); i++){
            H+=weights[i];
        }
        int mid=(L+H)/2,ans=H;
        
        while(L<=H){
            int c=0,weight=0;
            for(int i=0; i<weights.size(); i++){
                weight=weight+weights[i];
                if(weight>mid){c++;weight=weights[i];}
            }
            c++;
            if(c<=days){
                ans=mid;
                H=mid-1;
            }
            else{
                L=mid+1;
            }
            mid=(L+H)/2;
            
        }

        return ans;
    }
};