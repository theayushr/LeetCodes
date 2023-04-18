class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans = "";

        int n= max(word1.length(), word2.length());

        for(int i=0; i<n; i++){
            if(word1.length() >= i+1){
                ans+=word1[i];
            }       
            if(word2.length() >= i+1){
                ans+=word2[i];
            }      
        }
        return ans;
    }
};
