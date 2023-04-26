class Solution {
public:

    string reverseStr(string s, int k) {

        int n = s.size();
        
        for(int i=0; i<n ;i+=2*k){
            if((n-i)<k){
                reverse(s.begin()+i, s.end());
            }else{
                reverse(s.begin()+i, s.begin()+i+k );
            }
        }
        return s;
    }

/*
    string reverse(string str){
        string ans = "";
        for(int i = str.size()-1; i>=0; i--){
            ans+=str[i];
        }
        return ans;
    }

    string reverseStr(string s, int k) {

        string ans="";
        int left = s.size();
        for(int i=0; i<s.size(); i+=2*k){
            ans+=reverse(s.substr(i,k));
            ans+= s.substr(i+k,k);

            left = left - 2*k;
            if(left < 2*k){
                ans+=reverse(s.substr(i,k));
            }
        }
        return ans;
    }

    */
};
