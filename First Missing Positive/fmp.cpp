class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        if(nums.size()==1){
            if(nums[0]==1){
                return 2;
            }else{
                return 1;
            }
        }

        int ans = 1;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        if(nums[n-1]<=0){
            return 1;
        }

        for(int i=0; i<n; i++){
            if(nums[i]>0){

                if(i==0 and nums[i]!=1){
                    return 1;
                }

                if(i==0 and nums[i]==1){
                    ans++;
                }

                if(i>0 and nums[i]!=nums[i-1]){
                    if(nums[i]!=ans){
                        return ans;
                    }
                    ans++;
                }
            }
        }

        return nums[n-1]+1;
    }
};
