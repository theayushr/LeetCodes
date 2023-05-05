class Solution {
public:
    int maxVowels(string s, int k) {

        unordered_set<char> vowels = {'a','e','i','o','u'};

        int initialV = 0;
        for(int i=0; i<k; i++){
            initialV += vowels.count(s[i]);
        }

        int maxV = initialV;
        for(int i=k; i<s.length(); i++){
            initialV += vowels.count(s[i]) - vowels.count(s[i-k]);
            maxV= max(maxV, initialV);
        }

        return maxV;
        
        
    }
};
