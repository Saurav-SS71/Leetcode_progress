class Solution {
public:
    int maxDepth(string s) {
        int max_dep=0,c=0;
        for(auto i: s){
            if(i=='('){
                c++;
                if(max_dep<c){max_dep=c;}
            }
            else if(i==')'){
                c--;
            }
        }
        return max_dep;
    }
};