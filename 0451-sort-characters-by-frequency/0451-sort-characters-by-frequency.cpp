class Solution {
public:
    string frequencySort(string s) {
        vector<int> V(128,0);
        for(int i=0; i<s.size(); i++){
            V[s[i]]++;
        }
        string str;
        while(true){
            int max=0,index=0;
            for(int i=0; i<V.size(); i++){
                if(max<V[i]){max=V[i];index=i;}
            }
            if(max==0){break;}
            while(max>0){
                str+= (char)(index);max--;
            }
            V[index]=0;
        }
        return str;
    }
};