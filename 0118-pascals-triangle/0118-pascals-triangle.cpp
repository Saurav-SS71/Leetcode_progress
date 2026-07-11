class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> V( numRows); 

        for(int m=1; m<=numRows; m++){
            V[m-1].resize(m);
            V[m-1][0]=1;
            V[m-1][m-1]=1;
            for(int i=1; i<m-1; i++){
                V[m-1][i]=V[m-2][i-1] + V[m-2][i];
            }
        }
        return V;
    }
};