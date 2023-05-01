class Solution {
public:

    pair<int,int> nfib(int n){
        vector<int> fabi(n,0);
        fabi[0] = 0;
        fabi[1] = 1;

        for(int i=2; i<n; i++){
            fabi[i] = fabi[i-1] + fabi[i-2];
        }
        return {fabi[n-1], fabi[n-2]};
    }

    int fib(int n) {

        if(n==0 or n==1){
            return n;
        }

        int ans = nfib(n).first + nfib(n).second;
        return ans;
        
    }
};
