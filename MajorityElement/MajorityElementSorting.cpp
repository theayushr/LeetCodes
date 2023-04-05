class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //sorting technique;

        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
      
    }
};
