class Solution {
public:
    bool isSubsequence(string s, string t) {

        int pos = 0;
        for(auto ele:t){
            if(ele==s[pos]){
                pos++;
            }
        }

        return pos==s.size();
        
    }
};
