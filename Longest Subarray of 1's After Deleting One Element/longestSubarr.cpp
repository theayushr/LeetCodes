class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        /* INTUTION
        around every zero check the sum of continuous left and right one

        make a left and right array and there you go
        */  


        int n = nums.size();
        vector<int>left(n,-1);
        vector<int>right(n,-1);

        int l =0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                left[i] = l;
                l = 0;
                continue;
            }
            l++;
        }

        int r = 0;
        for(int i=n-1; i>=0; i--){
            if(nums[i]==0){
                right[i] = r;
                r = 0;
                continue;
            }
            r++;
        }
        
        int mx= 0;
        bool one = true;
        for(int i=0; i<n; i++){
            int temp = 0;
            if(nums[i]==0){
                temp = left[i]+right[i];

                mx = max(mx, temp);
                one = false;
            }
        }

        if(one) return n-1;
        return mx;

    }
};
