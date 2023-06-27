class Solution {
public:

    int rec(int n,vector<int>&dp, vector<int>&cost){
                //state: dp[i] represents the minimum cost to reach the top floor

        if(n<=1) return cost[n];

        if(dp[n]!=-1) return dp[n];

        int onestep = cost[n] + rec(n-1,dp,cost);
        int twostep = cost[n] + rec(n-2,dp,cost);
        
        return dp[n] = min(onestep, twostep);
    }

    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        cost.push_back(0);

        vector<int>dp(n+1,-1);
        return rec(n, dp, cost);
    }
};
