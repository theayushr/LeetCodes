class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int maxone = 0;
        int index = 0;
        
        for(int i =0; i<mat.size(); i++){
            int one = 0;
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j]==1){
                    one++;
                }
            }
            if(one>maxone){
                maxone = one;
                index = i;
            }
        }   
        return {index,maxone};
    }
};
