class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int pairs = 0;
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] == nums[j]){
                    pairs++;
                }
            }
        }
        
        //not a good solution though as the complexity is n2
        //could be improved
        return pairs;
        
    }
};
