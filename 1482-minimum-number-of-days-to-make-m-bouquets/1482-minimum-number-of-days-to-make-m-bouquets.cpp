class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()){
            return -1;
        }
        int min=0,max=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(max<bloomDay[i]){max=bloomDay[i];}
            if(min>bloomDay[i]){min=bloomDay[i];}
        }
        int mid=(min+max)/2,ans=max;
        while(min<=max){
            int c=0,BF=0;
            for(int i=0; i<bloomDay.size(); i++){
                if(mid>=bloomDay[i]){
                    c++;
                }
                else{BF += c/k;c=0;}
            }
            BF+=c/k;
            if(BF>=m){
                ans=mid;
                max=mid-1;
            }
            else{
                min=mid+1;
            }
            mid=(min+max)/2;
        }
        return ans;
    }
};