class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> freq;

        int count = 0;
        int maxt = 0;
        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;

            if(freq[s[i]] ==1){
                count++;
                maxt = max(maxt, count);
            }

            if(freq[s[i]] == 2){
                freq.clear();
                i = i-count;
                count = 0;
            }
        }

        return maxt;
        
    }
};
