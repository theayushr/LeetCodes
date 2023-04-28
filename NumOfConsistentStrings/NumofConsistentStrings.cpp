class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int count = 0;

        unordered_map<char,int> exist;
        for(auto ele:allowed){
            exist[ele]++;
        }

        for(int i=0; i<words.size(); i++){

            string check = words[i];
            bool isallow = true;
            for(int j=0; j<check.size(); j++){
                if(exist.find(check[j]) == exist.end()){
                    isallow = false;
                    break;
                }
            }

            if(isallow){
                count++;
            }
        }

        return count;



        
    }
};
