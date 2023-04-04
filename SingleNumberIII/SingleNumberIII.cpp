class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        vector<int> ans;
        unordered_map<int,int> freq;
    
        for(auto ele:nums){
            freq[ele]++;
        }

        for(auto ele:nums){
            if(freq[ele]==1){
                ans.push_back(ele);
            }
        }

        return ans;
        
    }
};
