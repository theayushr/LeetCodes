class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> ans;

        for(int i=0; i<nums.size(); i++){

            int start = nums[i];
            while((i+1)<nums.size() and nums[i+1]==nums[i]+1){
                i++;
            }

            if(start !=nums[i]){
                string ele = to_string(start) + "->" + to_string(nums[i]);
                ans.push_back(ele);
            }else{
                string ele = to_string(start);
                ans.push_back(ele);
            }
        }

        return ans;
        
    }
};
