
class Solution {
  public:
  
    int rec(int n, vector<int>&dp, vector<int>&height){
        //base case
        if(n==0) return 0;
        if(n==1) return abs(height[1]- height[0]);
        
        if(dp[n]!=-1) return dp[n];
        
        int onestep = rec(n-1,dp,height) + abs(height[n]-height[n-1]);
        int twostep = rec(n-2,dp,height) + abs(height[n]-height[n-2]);
        
        return dp[n] = min(onestep, twostep);
    }
    
    int tabulation(int n, vector<int>&dp, vector<int>&height){
        
        //base case
        dp[0] = 0;
        dp[1] = abs(height[1]-height[0]);
        
        for(int i=2; i<=n; i++){
            int onestep = dp[i-1] + abs(height[i]-height[i-1]);
            int twostep = dp[i-2] + abs(height[i]-height[i-2]);
            
            dp[i] = min(onestep, twostep);
        }
        
        return dp[n];
    }
    
    int savespace(int n, vector<int>&height){
        
        //base case
        
        if(n==0) return 0;
        
        int first = 0;
        int second = abs(height[1]-height[0]);
        
        for(int i=2; i<=n; i++){
            int onestep = second + abs(height[i]-height[i-1]);
            int twostep = first + abs(height[i]-height[i-2]);
            
            int temp = min(onestep, twostep);
            first = second;
            second = temp;
        }
        
        return second;
    }
    
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n+1, -1);
        return savespace(n-1,height);
    }
};
