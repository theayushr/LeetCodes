class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char,int>freq;
        for(auto ele:magazine){
            freq[ele]++;
        }

        for(auto ele:ransomNote){
            if(freq.find(ele)==freq.end() or freq[ele]==0){
                return false;
            }     
            freq[ele]--;      
        }

        return true;
        
    }
};
