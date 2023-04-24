class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char> jewel( jewels.begin(), jewels.end() );

        int count = 0;
        for(auto ele:stones){
            if(jewel.count(ele)){
                count++;
            }
        }
        return count;    
    }
};
