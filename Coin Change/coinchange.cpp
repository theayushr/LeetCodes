class Solution {
public:


    long long rec(int n, vector<int>&coins, vector<long long>&dp){

        //state - dp[n] represents the min no of coins to make sum n

        //base case
        if(n ==0 ) return 0;
        if(n<0) return 0;

        if(dp[n]!=-2) return dp[n];

        long long ans = INT_MAX;
        for(int i=0; i<coins.size(); i++){
            if((n-coins[i])>=0){
                long long temp = 1 + rec((n-coins[i]), coins, dp);
                ans = min(ans,temp);
            }
        }
        return dp[n] = ans;
    }

    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<long long>dp(amount+1, -2);

        int ans = (int)rec(amount, coins,dp);

        if(ans == INT_MAX or ans==INT_MAX-1 or ans<0) return -1;
        return ans;
    }
};
