class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());

        int cokies = 0;
        int content = 0;

        for(int i=0; i<g.size(); i++){ //iterating over childs
            if(cokies<s.size() and g[i]<=s[cokies]){
                content++;
                cokies++;
            }
        }

        return content;
        
    }
};
