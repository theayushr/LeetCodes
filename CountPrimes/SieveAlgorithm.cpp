class Solution {
public:
    
    int countPrimes(int n){

        vector<int> primes;
        vector<int> Sieve(n,0);

        for(int i=2; i*i<n; i++){
            if(Sieve[i]==0){
                for(int j =i*i; j<n; j+=i){
                    Sieve[j] = 1;
                }
            }
        }

        for(int i=2; i<n; i++){
            if(Sieve[i]==0){
                primes.push_back(i);
            }
        }

        return primes.size();


    }





















/* BRUTE BRUTE FORCE -- 

    bool isPrime(int n){
        if(n==1) return false; 
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n) {

        int times = 0;
        for(int i=1; i<n; i++){

            if(isPrime(i)){
                times++;
            }
        }

        return times;
*/
};
