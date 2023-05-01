class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        //{twice number, missing number}

        sort(nums.begin(), nums.end());
        pair<int,int> ans = {nums[0], nums[0]};


        for(int i=1; i<nums.size(); i++){

            if(nums[i]==nums[i-1]){
                ans.second = nums[i];
            }else if(nums[i]!=nums[i-1]+1){
                ans.first = nums[i]-1;
            }
        }

        if(ans.first == 1){
            ans.first = nums.size();
        }
        if(nums[0]!=1){
            ans.first = 1;
        }

        return {ans.second, ans.first};
 
    }
};
