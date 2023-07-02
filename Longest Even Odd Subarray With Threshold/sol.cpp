class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++){
            int tv = 0;
            if(nums[i]%2==0 and nums[i]<=threshold){
                
                tv++;    
                int j=i+1;
                while(j<nums.size() and nums[j]<=threshold){
                    if(nums[j]%2!=nums[j-1]%2){
                        tv++;
                    }else{
                        break;
                    }
                    j++;
                }
                ans = max(ans, tv);
                //i=j--;
            }
        }
        return ans;
    }
};
