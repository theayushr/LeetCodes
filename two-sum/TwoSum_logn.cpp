class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> buffer; // <number, pos>

        for(int i=0; i<nums.size(); i++){

            int diff = target - nums[i];
            if(buffer.find(diff) != buffer.end()){
                return {buffer[diff], i};
            }
            else{
                buffer[nums[i]] = i;
            }
        }
        return {-1,-1};
    }  
};
