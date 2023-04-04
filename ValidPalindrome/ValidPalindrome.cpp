class Solution {
public:
    bool isPalindrome(string s) {
        
        string valid;
        for(int i=0; i<s.size(); i++){
            if( isalpha(s[i]) or isdigit(s[i])){
                valid += tolower(s[i]);
            }
        }
        bool flag = true;
        int n= valid.size();
        for(int i=0; i<n/2; i++){
            if(valid[i] != valid[n-1-i]){
                flag = false;
                break;
            }
        }

        return flag;
        
    }
};
