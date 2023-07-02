class Solution {
public:
    
    bool isprime(int n){
        if(n<2) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    
    vector<vector<int>> findPrimePairs(int n) {
        
        vector<vector<int>> ans;
        
        for(int i=1; i<=n/2; i++){
            int target = n-i;
            if(isprime(i) and isprime(target)){
                ans.push_back({i,target});
            }
        }
        
        return ans;
    }
};
