class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        if(nums.size()==1){
            return 0;
        }

        vector<int> prefix;
        prefix.push_back(nums[0]);

        for(int i=1; i<nums.size(); i++){
            prefix.push_back(nums[i] + prefix[i-1]);
        }

        for(int i=0; i<nums.size(); i++){
            long long left = prefix[i] - nums[i];
            long long right = prefix[nums.size()-1] - prefix[i];

            if(left==right){
                return i;
            }
        }

        return -1;
    
    }
};
