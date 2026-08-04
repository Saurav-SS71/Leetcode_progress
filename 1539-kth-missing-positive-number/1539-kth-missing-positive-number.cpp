class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int index=0,c=0;
        for(index=0; index<arr.size(); index++){
            if(index==0){
                c+=arr[index]-1;
            }
            else if((arr[index]-arr[index-1])-1>0){
                c+=(arr[index]-arr[index-1])-1;
            }
            if(c>=k){break;}
        }
        if(index==arr.size()){
            return arr[index-1] + (k-c);
        }
        return arr[index]-(c-k)-1;
    }
};