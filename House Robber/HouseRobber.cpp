class Solution {
public:

    int savespace(int n, vector<int>&nums){

        int front = nums[0];
        int behind = 0;

        for(int i =1; i<n; i++){
            int pick = nums[i];
            if(i>1) pick += behind;
            int notpick = front;

            int curr = max(pick, notpick);
            behind = front;
            front = curr;
        }
        return front;
    }

    int tabulation(int n, vector<int>&dp, vector<int>&nums){

        if(n==0) return nums[0];

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i=2; i<=n; i++){

            int pick = nums[i]  + dp[i-2];
            int notpick = dp[i-1];

            dp[i]  = max(pick,notpick);
        }

        return dp[n];
    }


    int rec(int ind, vector<int>&dp, vector<int>&nums){

        //state - dp[i] represents the maximum momey can be looted from ith house

        //base cases
        if(ind==0) return nums[0];
        if(ind==1) return max(nums[1], nums[0]);

        if(dp[ind]!=-1) return dp[ind];

        int pick = nums[ind] + rec(ind-2,dp,nums);
        int notpick = rec(ind-1,dp,nums);

        return dp[ind] = max(pick,notpick);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();
        vector<int>dp(n+1,-1);
        return savespace(n,nums);
    }
};
