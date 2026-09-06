class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> V,dummy;
        int close=0,open=0;
        generate(dummy,V,open,close,n);
        return V;
    }

    void generate(vector<string>& dummy,vector<string>& V, int open,int close,int n){
        
        if(n==open&&n==close){
            string s;
            for( auto i: dummy) s+=i;
            V.push_back(s);
            return;
        }
        if(open>=close){
            if(open<n){
                dummy.push_back("(");
                generate(dummy,V,open+1,close,n);
                dummy.pop_back();
            }
            if(close<n){
                dummy.push_back(")");
                generate(dummy,V,open,close+1,n);
                dummy.pop_back();
            }
        }
    }
};