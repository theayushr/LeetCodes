class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        if(nums.size()==1){
            return nums;
        }

        int times = 0;
        int pos = 0;
        while(times<nums.size()){
            if(nums[pos]%2!=0){
                nums.push_back(nums[pos]);
                nums.erase(nums.begin()+pos);
            }
            else{
                pos++;
            }
            times++;
        }

        return nums;
        
    }
};
