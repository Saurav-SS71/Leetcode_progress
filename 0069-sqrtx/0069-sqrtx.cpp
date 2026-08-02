class Solution {
public:
    int mySqrt(int n) {
        long long L=1,H=n,mid=(L+H)/2,ans=0;
        while(L<=H){
            if(mid*mid==n){return mid;}
            if(mid*mid<n){ans=mid;L=mid+1;}
            else{H=mid-1;}
            mid=(L+H)/2;
        }
        return (int)(ans);
    }
};