class Solution {
public:
    bool rotateString(string s, string goal) {
        int k=s.size()-1;
        if(s==goal){return true;}
        while(k>0){
            int temp=s[s.size()-1];
            for(int i=s.size()-1; i>0; i--){
                s[i]=s[i-1];
            }
            s[0]=temp;
            if(s==goal){
                return true;
            }
            k--;
        }
        return false;
    }
};