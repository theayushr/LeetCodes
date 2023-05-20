class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxW = 0;
        for(int i=0; i<accounts.size(); i++){
            int wealth = 0;
            for(int j=0; j<accounts[0].size(); j++){
                wealth += accounts[i][j];
            }
            maxW = max(maxW, wealth);
        }
        return maxW;
    }
};
