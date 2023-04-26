class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        unordered_map<int, int> freq;

        for(auto ele:nums){
            freq[ele]++;
        }

        for(auto ele:nums){
            if(freq[ele]==1){
                return ele;
            }
        }

        return -1;
        
    }
};
