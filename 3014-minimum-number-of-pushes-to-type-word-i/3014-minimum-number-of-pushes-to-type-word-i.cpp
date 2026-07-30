class Solution {
public:
    int minimumPushes(string words) {
        if(words.size()<9){
            return words.size();
        }
        else if(words.size()<17&&words.size()>8){
            return (words.size()-8)*2 + 8;
        }
        else if(words.size()<25&&words.size()>16){
            return (words.size()-16)*3 + 8*2 + 8;
        }
        else{
            return (words.size()-24)*4 + 8 + 8*3 + 8*2;
        }
        return 0;
    }
};