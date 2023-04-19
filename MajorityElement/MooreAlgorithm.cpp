class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //moore algorithm

        int count = 0;
        int ele;

        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                ele = nums[i];
                count = 1;
            }else {
                if(nums[i]==ele){
                    count++;
                }else{
                    count--;
                }
            }
        }

        if(count<=0){
            return -1;
        }else{
            int times = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==ele){
                    times++;
                }
            }
            if(times>nums.size()/2){
                return ele;
            }else{
                return -1;
            }
        }
        
    }
};
