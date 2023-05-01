class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //negative marking approach
        //we mark nums[curr] so that we know this element has come before

        int currr = 0;
        int dupli = -1;

        for(int i=0; i<nums.size(); i++){
            int curr = abs(nums[i]);

            if(nums[curr] < 0){
                dupli = curr;
                break;
            }else{
                nums[curr] = nums[curr] * (-1);
            }
        }

        //restoring
        for(auto ele:nums){
            ele = abs(ele);
        }

        return dupli;
        
    }
};
