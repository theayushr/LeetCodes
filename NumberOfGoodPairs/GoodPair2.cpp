class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        unordered_map<int,int> freq;

        for(auto ele: nums){
            freq[ele] ++;
        }

        int ans = 0;
        for (auto ele: freq){
            if(ele.second > 1){
                int n = ele.second;
                ans += n*(n-1)/2;
            }
        }
        

        return ans;
    }
};
