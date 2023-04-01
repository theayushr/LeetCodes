class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector <int> dupli;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                int temp = nums[i];
                nums.erase(nums.begin() + i);
                dupli.push_back(nums[i]);
                i--;
            }
        }
        
        int sz = nums.size();

        for(int i=0; i<dupli.size(); i++){
            nums.push_back(dupli[i]);
        }

        return sz;
    }
};
