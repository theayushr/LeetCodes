class Solution {
  public:
  
    int rec(vector<int>&dp, vector<int>&height, int n){
        
        //base case
        if(n==0) return 0;
        if(n==1) return abs(height[1] - height[0]);
        
        //if already encountered
        if(dp[n]!=-1) return dp[n];
        
        //otherwise
        dp[n] = min( (abs(height[n]-height[n-1])+rec(dp,height, n-1)), (abs(height[n]-height[n-2]) + rec(dp,height,n-2)) );
        return dp[n];
    }
    
    int minimumEnergy(vector<int>& height, int n) {
        
        vector<int>dp(n+1, -1);
        return rec(dp, height, n-1);
    }
};
