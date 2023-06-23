class Solution {
public:

    bool isvowel(char ch){
        if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {

        int vow = 0;
        for(int i=0; i<k; i++){
            if(isvowel(s[i])){
                vow++;
            }
        }

        int maxvow = vow;
        for(int i=k; i<s.size(); i++){
            vow+= isvowel(s[i]) - isvowel(s[i-k]);
            maxvow = max(maxvow, vow);
        }

        return maxvow;
 
    }
};
