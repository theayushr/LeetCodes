class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        unordered_set<int> unique;
        for(int ele: candyType){
            unique.insert(ele);
        }

        return min(unique.size(), candyType.size()/2);
        
    }
};
