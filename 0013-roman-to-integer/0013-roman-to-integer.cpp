class Solution {
public:
    int romanToInt(string s) {
        int sum=0,i=0;
        unordered_map<char,int> V;
        V['I']=1;V['V']=5;V['X']=10;V['L']=50;V['C']=100;V['D']=500;V['M']=1000;
        while(i<s.size()-1){
            if(V[s[i]]<V[s[i+1]]){
                sum= sum + (V[s[i+1]]-V[s[i]]);
                i=i+2;
            }
            else{
                sum= sum + V[s[i]];
                i++;
            }
        }
        if(i==s.size()-1){
            sum = sum + V[s[i]];
        }
        return sum;
    }
};