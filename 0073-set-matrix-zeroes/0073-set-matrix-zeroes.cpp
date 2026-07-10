class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> R(matrix.size(),0),C(matrix[0].size(),0);
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    R[i]=1;
                    C[j]=1;
                }
            }
        }
        
        for(int i=0; i<R.size(); i++){
            for(int j=0; j<C.size(); j++){
                if(R[i]==1||C[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};