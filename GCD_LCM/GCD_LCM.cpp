class Solution {
  public:
  
        long long gcd(long long a, long long b){
            if (b == 0)
                return a;
            return gcd(b, a % b); 
        }
        
        
        long long lcm(long long a, long long b) { 
            return a * b / gcd(a, b); 
        }
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        //LCM and GCD
        
        // long long gcd =1;
        // for(int i=min(A,B); i>=1; i--){
        //     if((A%i==0) and (B%i==0)){
        //         gcd = i;
        //         break;
        //     }
        // }
        
        return {lcm(A,B), gcd(A,B)};
    }
};
