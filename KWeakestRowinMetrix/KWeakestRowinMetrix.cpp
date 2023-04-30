class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        vector<pair<int,int>> weak;
        int rows = mat.size();
        int cols = mat[0].size();

        for(int i=0; i<rows; i++){
            int army = 0;
            for(int j=0; j<cols;j++){
                if(mat[i][j]==1){
                    army++;
                }
            }

            weak.push_back({army,i});
        }

        sort(weak.begin(), weak.end());

        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(weak[i].second);
        }

        return ans;
        
    }
};
