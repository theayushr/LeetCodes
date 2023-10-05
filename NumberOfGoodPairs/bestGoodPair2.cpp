class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int ans = 0;
        
        unordered_map <int,int> freq;
        
        for(auto ele: nums){
            freq[ele]++;
            ans += freq[ele]-1;
        }

        return ans;

    }
};
