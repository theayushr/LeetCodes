class Solution {
public:
    int compress(vector<char>& chars) {

        int mod = 0;
        int count = 1;
        for(int i=1; i<=chars.size(); i++, count++){

            if(i==chars.size() or chars[i]!=chars[i-1]){
                chars[mod] = chars[i-1];
                mod++;

                if(count>1){
                    for(auto digit: to_string(count)){
                        chars[mod] = digit;
                        mod++;
                    }
                }
                count = 0;
            }
        }

        return mod;
        
    }
};
