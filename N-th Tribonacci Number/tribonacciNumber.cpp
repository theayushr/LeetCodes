class Solution {
public:

    int savespace(int n){
        int three = 0;
        int two = 1; 
        int one = 1;

        for(int i=3; i<=n; i++){
            int curr = one+two+three;
            three = two;
            two = one;
            one = curr;
        }

        return one;

    }

    int tabulation(int n, vector<int>&dp){
        //bottom up approach
        //base case

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for(int i=3; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }

        return dp[n];
    }
    int tribonacci(int n) {

        //f(n) = f(n-1)  + f(n-2) + f(n-3)

        //side cases here 
        if(n==0) return 0;
        if(n==1 or n==2) return 1;

        //vector<int>dp(n+1, -1);
        //return tabulation(n,dp);


        return savespace(n);
        
    }
};
