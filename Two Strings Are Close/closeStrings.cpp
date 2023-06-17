class Solution {
public:
    bool closeStrings(string word1, string word2) {

        unordered_map<char,int> ina;
        unordered_map<char,int> inb;

        for(auto ele:word1){
            ina[ele]++;
        }

        for(auto ele:word2){
            inb[ele]++;
        }

        for(auto ele:word1){
            if(inb.find(ele)==inb.end()){
                return false;
            }
        }

        for(auto ele:word2){
            if(ina.find(ele)==ina.end()){
                return false;
            }
        }

        if(ina.size()!=inb.size()){
            return false;
        }

        vector<int>one;
        vector<int>two;

        for(auto ele:ina){
            one.push_back(ele.second);
        }

        for(auto ele:inb){
            two.push_back(ele.second);
        }

        sort(one.begin(), one.end());
        sort(two.begin(), two.end());

        for(int i=0; i<one.size(); i++){
            if(one[i]!=two[i]){
                return false;
            }
        }

        return true;


        
    }
};
