class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;

    //Setting Flags
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;

                    if(j != 0){
                        matrix[0][j] = 0;
                    }
                    else{
                        col0 = 0;    
                    }
                }
            }
        }

    //Setting inner matrix with 0
        for(int i = 1; i<n; i++){
            for(int j = 1; j<m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    
    //Setting Column Flag Zero (0th row)
        if(matrix[0][0] == 0){
            for(int j = 1; j<m; j++){
                matrix[0][j] = 0;
            }
        }

    //Setting Row Flag Zero (0th column)
        if(col0 == 0){
            for(int i = 0; i<n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
