class Solution {
public:
    int maxProduct(int n) {;
        vector<int> V;
        while(n>0){
            V.push_back(n%10);
            n=n/10;
        }
        sort(V.begin(),V.end());
        return V[V.size()-1]*V[V.size()-2];
    }
};