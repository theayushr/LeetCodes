class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {

        int ans = 0;
        sort(nums.begin(), nums.end());

        int pos = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[pos]<nums[i]){
                pos++;
                ans++;
            }
        }

        return ans;
        
    }
};
