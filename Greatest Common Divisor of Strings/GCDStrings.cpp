class Solution {
public:

    bool sahihai(string str1, string str2, int i){

        int len1 = str1.size();
        int len2 = str2.size();

        if(len1 % i !=0 or len2 % i !=0){
            return false;
        }

        string base = str1.substr(0,i); // i is the length of the base string
        int times1 = len1/i;
        int times2 = len2/i;

        return str1 == joinWords(base, times1) and str2 == joinWords(base, times2);

        //joining these words tiems1 times
    }

    string joinWords(string base, int times){
        string ans = "";
        for(int i=1; i<=times; i++){
            ans+=base;
        }
        return ans;
    }


    string gcdOfStrings(string str1, string str2) {

        int len1 = str1.size();
        int len2 = str2.size();


        //iterating from the back to front
        for(int i=min(len1,len2); i>=1; i--){
            if(sahihai(str1,str2,i)){
                return str1.substr(0,i);
            }
        }

        return "";
        
    }
};
