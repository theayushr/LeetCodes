class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0 or nums.size()==1){
            return nums.size();
        }

        sort(nums.begin(), nums.end());

        int maxi = 1;
        int times = 1;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]+1 == nums[i+1]){
                times++;
            }
            else if(nums[i] == nums[i+1]){
                continue;
            }
            else{
                times = 1;
            }
            maxi = max(maxi, times);
        }

        return maxi;
        
    }
};
