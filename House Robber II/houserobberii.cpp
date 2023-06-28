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

    int rec(int n,vector<int>&dp, vector<int>&nums){
        //base case
        if(n==0) return nums[0];
        if(n<0) return 0;

        if(dp[n]!=-1) return dp[n];

        int pickit = nums[n] + rec(n-2, dp, nums);
        int notpickit = rec(n-1, dp, nums);

        return dp[n] = max(pickit, notpickit);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n==1) return nums[0];

        vector<int> takeone, takelast;
        for(int i=0; i<n; i++){
            if(i!=0) takelast.push_back(nums[i]);
            if(i!=n-1) takeone.push_back(nums[i]);
        }

        vector<int>dp(n+1,-1);
        vector<int>dp2(n+1,-1);

        return max(rec(n-2, dp, takeone), rec(n-2, dp2, takelast));

        //return max(savespace(n-1,takeone), savespace(n-1,takelast));
    }
};
