class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();

        //changing all the negative numbers to 0
        for(int i=0; i<n; i++)
            if(nums[i]<0) nums[i] = 0;

        
        for(int i=0; i<n; i++){
            int pos = abs(nums[i]);
            if(pos>0 and pos<=n){
                if(nums[pos-1]>0){
                    nums[pos-1]*=-1;
                }else if(nums[pos-1]==0){
                    nums[pos-1] = -1*(n+1);
                }
            }
        }

        for(int i=1; i<=n; i++){
            if(nums[i-1]>=0){
                return i;
            }
        }

        return n+1;

    }

};
