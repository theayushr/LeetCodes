class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int> times;
        vector<int> ans = nums;

        sort(ans.rbegin(), ans.rend());
        for(int i=0;i<n; i++){
            times[ans[i]] = n-i-1; 
        }

        for(int i=0; i<n; i++){
            ans[i] = times[nums[i]];
        }

        return ans;
        
    }
};
