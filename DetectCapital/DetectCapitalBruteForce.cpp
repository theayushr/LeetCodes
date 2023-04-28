class Solution {
public:
    bool detectCapitalUse(string word) {

        for(int i=1; i<word.length(); i++){
            if(isupper(word[i]) and not isupper(word[i-1])){
                return false;
            }

            if(not isupper(word[i]) and i!=1 and isupper(word[i-1])){
                return false;
            }
        }

        return true;
        
    }
};
