class Solution {
public:
    int partitionString(string s) {

        int count = 0;
        unordered_map<char, int> freq;

        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
            if(freq[s[i]]==2){
                count++;
                for(int j =0; j<=i; j++){
                    freq[s[j]]=0;
                }
                freq[s[i]]=1;
            }
        }

        return ++count;
        
    }
};
