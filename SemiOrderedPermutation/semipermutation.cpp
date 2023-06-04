class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;
        
        while(nums[0]!=1){
            for(int i=0; i<n; i++){
                if(nums[i]==1){
                    swap(nums[i],nums[i-1]);
                    count++;
                    break;
                }
            }
        }
        
        while(nums[n-1]!=n){
            for(int i=0; i<n; i++){
                if(nums[i]==n){
                    swap(nums[i], nums[i+1]);
                    count++;
                    break;
                }
            }
        }
        
        return count;
        
    }
};
