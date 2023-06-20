class Solution {
public:
    string reverseWords(string s) {

        vector<string> sen;

        int pos = 0;
        int len = 0;

        for(int i =0; i<s.size(); i++){

            if(s[i]==' ' and len!=0){
                string word =  s.substr(pos, len);
                sen.push_back(word);

                pos = i+1;
                len = 0;
            }else if(s[i]==' ' and len==0){
                pos++;
            }else if(s[i]!=' '){
                len++;
            }
        }

        if(len!=0){
            string word = s.substr(pos, len);
            sen.push_back(word);
        }

        string ans="";
        for(int i=sen.size() -1; i>=0; i--){
            ans += sen[i];
            if(i>0){
                ans+=' ';
            }
        }

        return ans;
        
    }
};
