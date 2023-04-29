class Solution {
public:
    int beautySum(string s) {

        int ans = 0;
        int n = s.size();

        for(int i=0; i<n; i++){

            unordered_map<char,int> freq;
            for(int j=i; j<n; j++){
                
                freq[s[j]]++;

                int maxi = INT_MIN, mini = INT_MAX;
                for(auto ele:freq){
                    maxi = max(maxi, ele.second);
                    mini = min(mini, ele.second);
                }
                ans+= (maxi-mini);
            }   
        }

        return ans;
        
    }
};
