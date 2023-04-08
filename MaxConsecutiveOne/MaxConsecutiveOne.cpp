class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        vector<int> one;

        int count=0;
        for(auto ele:nums){
            if(ele ==1){
                count++;
            }
            else{
                one.push_back(count);
                count=0;
            }
        }

        if(nums[nums.size()-1] !=0){
            one.push_back(count);
        }

        sort(one.rbegin(), one.rend());
        return one[0];
        
    }
};
