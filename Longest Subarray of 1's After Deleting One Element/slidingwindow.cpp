class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        /*
        sliding window approach also seems fine here.
        I got the idea of editorial. We can afford one zero in the window 
        */


        int n = nums.size();
        int zero = 0;
        int start = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            zero += (nums[i]==0);

            while(zero>1){
                zero -= (nums[start]==0);
                start++;
            }

            ans = max(ans,i-start);
        }

        return ans;     
    }
};
