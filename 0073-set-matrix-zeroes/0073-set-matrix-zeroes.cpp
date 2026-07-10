class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> R,C;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    R.push_back(i);
                    C.push_back(j);
                }
            }
        }
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<C.size(); j++){
                matrix[i][C[j]]=0;
            }
        }
        for(int i=0; i<matrix[0].size(); i++){
            for(int j=0; j<R.size(); j++){
                matrix[R[j]][i]=0;
            }
        }
    }
};