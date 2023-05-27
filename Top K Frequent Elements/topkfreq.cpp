class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        vector<pair<int,int>> pairs;
        for(auto ele:freq){
            pairs.push_back({ele.second, ele.first});
        }

        sort(pairs.rbegin(), pairs.rend());
        vector<int> ans;

        for(int i=0; i<k; i++){
            ans.push_back(pairs[i].second);
        }

        return ans;
        
    }
};
