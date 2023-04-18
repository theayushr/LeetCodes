class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

        if(nums.size()==1){
            return 0;
        }

        int sum  = 0;
        for(auto ele:nums){
            sum+=ele;
        }

        int leftSum = 0;
        int rightSum = sum;
        for(int i=0; i<nums.size(); i++){

            rightSum = rightSum-nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
        
    }
};
