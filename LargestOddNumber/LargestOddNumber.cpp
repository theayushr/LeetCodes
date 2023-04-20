class Solution {
public:
    string largestOddNumber(string num) {

        string ans = "";
        for(int i= num.size()-1; i>=0; i--){
            string str(1,num[i]);
            int nums = stoi(str);
            if(nums%2!=0){
                ans = num.substr(0, i+1);
                break;
            }
        }
        
        return ans;
    }
};
