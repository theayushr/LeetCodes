class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        
        int mindiff = INT_MAX;
        
        sort(nums.begin(), nums.end());
        
        for(int i=1; i<nums.size(); i++){
            
            int diff = nums[i]-nums[i-1];
            
            mindiff = min(mindiff, diff);
        }
        
        return mindiff;
        
    }
};
