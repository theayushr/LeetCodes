class Solution {
public:
    int minimizedStringLength(string s) {
        
        set<char> alpha;
        for(int i=0; i<s.size(); i++){
            alpha.insert(s[i]);
        }
        
        return alpha.size();
        
    }
};
