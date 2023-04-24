class Solution {
public:
    bool rotateString(string s, string goal) {

        int n= s.size();

        for(int i=0; i<n; i++){

            if(s[i]==goal[0]){
                string temp = s.substr(i, n-i) + s.substr(0,i);
                if(temp == goal)
                    return true;
            }
        }
        return false;
    }
};
