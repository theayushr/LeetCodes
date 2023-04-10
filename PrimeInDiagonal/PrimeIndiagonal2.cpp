class Solution {
public:
    
    bool isprime(int num){
        
        if(num==1){
            return false;
        }
        
        for(int i=2; i<=pow(num,0.5); i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int n = nums.size();
        int maxPrime = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j or (i+j)==n-1){
                    if(isprime(nums[i][j])){
                        maxPrime = max(maxPrime, nums[i][j]);
                    }
                }
            }
        }
        
        return maxPrime;
        
        
    }
};
