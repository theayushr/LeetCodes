class Solution {
public:
    bool detectCapitalUse(string word) {
        
        //count the number of upper chars
        
        int capital = 0;
        for(int i=0; i<word.size(); i++){
            if(isupper(word[i]))
                capital++;
        }

        if(capital ==1 and isupper(word[0])){
            return true;
        }
        if(capital == 0 or capital == word.size()){
            return true;
        }

        return false;
        
    }
};
