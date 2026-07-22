class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9){
            digits[digits.size()-1]++;
        }
        else{
            int c=digits.size()-1;
            while(c>=0){
                if(digits[c]==9){
                    c--;
                }
                else{
                    break;
                }
            }
            if(c>=0){
            digits[c]++;
            for(int j=c+1; j<digits.size(); j++){
                digits[j]=0;
            }
            }
            else{
                for(int k=0; k<digits.size(); k++){
                    digits[k]=0;
                }
                digits.insert(digits.begin(),1);
            }
            

        }
        return digits;
    }
};