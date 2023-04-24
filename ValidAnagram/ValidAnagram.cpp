class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()){
            return false;
        }

        map<char, int> st;
        map<char, int> ts;

        for(auto ele:s){
            st[ele]++;
        }

        for(auto ele:t){
            ts[ele]++;
        }

        for(auto ele:s){
            if(st[ele] != ts[ele]){
                return false;
            }
        }

        return true;
        
    }
};
