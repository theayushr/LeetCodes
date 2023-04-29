class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        sort(nums.rbegin(), nums.rend());
        int maxi = nums[0];
        int ans = ((k-1)*k/2) + k*maxi;
        return ans;
    }
};
