#include <bits/stdc++.h> 

    int savespace(int n,vector<int>&nums){

        int first = nums[0];
        int second = 0;

        for(int i=1; i<n; i++){
            
            int take = nums[i];
            if(i>1) take += second;

            int nottake = first;

            int cur = max(take, nottake);
            second = first;
            first = cur;


        }

        return first;
    }


    int tabulation(int n, vector<int>&dp, vector<int>&nums){

        dp[0] = nums[0];

        for(int i=1; i<=n; i++){
            int pick = nums[i];
            if(i>1) pick += dp[i-2];

            int notpick = dp[i-1];

            dp[i] = max(pick,notpick);
        }

        return dp[n];
    }

    int rec(int n, vector<int>&dp, vector<int>&nums){

        //define the state = dp[i] represents the maximum sum of subseq using constraints
        //base case
        if(n==0) return nums[n];
        if(n==1) return max(nums[1],nums[0]);
        if(n<0) return 0;

        //if already encountered
        if(dp[n]!=-1) return dp[n];

        //pick it
        int pick = nums[n] + rec(n-2, dp, nums);

        //not pick it

        int notpick = rec(n-1, dp,nums);

        return dp[n] = max(pick, notpick);

    }

int maximumNonAdjacentSum(vector<int> &nums){

    int n = nums.size();
    vector<int>dp(n,-1);
    return savespace(n, nums);
}
