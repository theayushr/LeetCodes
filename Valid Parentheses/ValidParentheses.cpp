class Solution {
public:
    bool isValid(string s) {

        int n = s.size();
        stack <char> st;

        for(int i=0; i<n; i++){

            if(s[i] =='{' or s[i] =='(' or s[i] =='['){
                st.push(s[i]);
            }else{

                if(st.empty()) return false;

                char c = st.top();
                st.pop();
                if((s[i]=='}' and c =='{') or (s[i]==')' and c =='(') or (s[i]==']' and c =='[')  ){
                    //sahi hai
                }else{
                    return false;
                }

            }

        } 

        if(st.empty()){
            return true;
        }
        return false;

        
    }
};
