class Solution {
public:

    int memoization(int n, vector<int>&dp){
        //base case
        if(n<=1) return n;

        if(dp[n]!=-1) return dp[n];

        return dp[n] = memoization(n-1, dp) + memoization(n-2, dp);
    }

    int tabulation(int n, vector<int>&dp){

        if(n<=1) return n;

        //base case
        dp[0] = 0;
        dp[1] = 1;

        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];

    }

    int savespace(int n){

        if(n<=1) return n;
        
        int first = 0;
        int second = 1;

        for(int i=2; i<=n; i++){
            int cur = second + first;
            first = second;
            second = cur;
        }

        return second;
    }

    int fib(int n) {
        vector<int>dp(n+1,-1);

        //return tabulation(n,dp);
        //return memoization(n,dp);
        return savespace(n);
    }
};
