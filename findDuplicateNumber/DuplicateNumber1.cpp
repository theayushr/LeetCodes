class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //brute force

        unordered_map<int,int> freq;
        for(auto ele:nums){
            freq[ele]++;

            if(freq[ele]==2){
                return ele;
            }
        }
        
        return -1;
        
    }
};
