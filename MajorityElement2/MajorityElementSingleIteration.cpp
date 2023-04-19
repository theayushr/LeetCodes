class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector <int> ans;
        unordered_map<int, int> freq; // number, count
        for(auto ele:nums){
            freq[ele]++;
            if(freq[ele]==nums.size()/3 +1){
                ans.push_back(ele);
            }
        }
        return ans;

    }
};
