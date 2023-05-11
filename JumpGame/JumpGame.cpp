class Solution {
public:
    bool canJump(vector<int>& nums) {

        int targetPos = nums.size()-1;

        for(int i=targetPos ; i>=0; i--){
            if(nums[i]>=targetPos - i){
                targetPos = i;
            }
        }

        return (targetPos==0)? true:false;


        
    }
};
