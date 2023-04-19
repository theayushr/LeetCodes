class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){

                if(matrix[i][j]==0){

                    //converting row to 2 
                    for(int c=0; c<col; c++){
                        if(matrix[i][c]!=0){
                            matrix[i][c] = -512;
                        }  
                    }

                    //conveting col to 2
                    for(int r= 0; r<row; r++){
                        if(matrix[r][j]!=0){
                            matrix[r][j]= -512;
                        }
                    }
                }
            }
        }

        for(int i =0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==-512){
                    matrix[i][j]= 0;
                }
            }
        }

        

    }
};
