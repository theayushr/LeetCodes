class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> freq;
        int times = 0;
        for(auto ele: nums){
            freq[ele]++;
            times = max(times, freq[ele]);
        }

        for(auto ele:nums){
            if(times == freq[ele]){
                return ele;
            }
        }

        return -1;
      
    }
};
