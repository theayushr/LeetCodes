class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string ans = "";

        int n = word1.size();
        int m = word2.size();

        if(n<m){
            for(int i=0; i<n; i++){
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }

            ans += word2.substr(n,m-n);
        }
        else{
            for(int i=0; i<m; i++){
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }

            ans+= word1.substr(m,n-m);
        }
        
        return ans;
    }
};
