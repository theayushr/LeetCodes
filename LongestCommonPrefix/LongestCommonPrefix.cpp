class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());
        int howmany = 0;

        string first = strs[0];
        string last = strs[strs.size()-1];

        while(howmany < first.size()){
            
            if(first[howmany] == last[howmany] ){
                howmany++;
            }
            else{
                break;
            }
        }

        return (howmany==0)? "": first.substr(0,howmany);
       
    }
};
