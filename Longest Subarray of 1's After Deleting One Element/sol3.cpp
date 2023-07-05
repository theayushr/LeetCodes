class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int n = nums.size();
        int result = 0;

        int start = 0;
        int zeroes = 0;
        int zeroPos = -1;

        for(int i=0; i<n; i++){

            if(nums[i]==0){
                zeroes++;
                if(zeroes == 1) zeroPos = i;
            }

            if(zeroes==2){
                start = zeroPos+1;
                zeroes--;
                zeroPos = i;
            }

            result = max(result, i-start);
        }

        return result;
        
    }
};
