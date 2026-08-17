class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0;
        while(i<matrix.size()){
            if(matrix[i][0]>target){
                break;
            }
            i++;
        }
        while(j<matrix[0].size()){
            if(matrix[0][j]>target){
                break;
            }
            j++;
        }
        for( int a=0; a<i; a++){
            for( int b=0; b<j; b++){
                if(matrix[a][b]==target){
                    return true;
                }
            }
        }
        return false;
    }
};