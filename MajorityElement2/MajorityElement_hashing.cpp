class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector <int> ans;
        unordered_map<int, int> freq; // number, count
        for(auto ele:nums){
            freq[ele]++;
        }

        for(auto ele:freq){
            if(ele.second > nums.size()/3){
                ans.push_back(ele.first);
            }
        }
      
        return ans;
      
    }
};
