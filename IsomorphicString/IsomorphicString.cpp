class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map <char, char> mapst;
        unordered_map <char, char> mapts;

        mapst[s[0]] = t[0];
        mapts[t[0]] = s[0];

        int i=1;
        while(i<s.length()){

            if(mapst.find(s[i])!= mapst.end()){
                if(mapst[s[i]] != t[i] ){
                    return false;
                }
            }else{

                if(mapts.find(t[i]) != mapts.end()){
                    return false;
                }
                mapst[s[i]] = t[i];
                mapts[t[i]] = s[i];
            }
            i++;
        }
        return true;
    }
};
