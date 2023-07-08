class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        
        int n = nums.size();
        
        int result = INT_MIN;
        
        for(int i=0; i<n-1; i++){
            
            int len = 0;
            if(nums[i]+ 1 == nums[i+1]){
                len = 2;
                
                result = max(result, len);
                
                for(int j=i+2; j<n; j++){
                    
                    if(nums[j]==nums[j-2]){
                        len++;
                        result = max(result, len);
                    }else{
                        result = max(result, len);
                        break;
                    }
                }
            }
        }
        
        if(result == INT_MIN) return -1;
        
        return result;
        
        
        
    }
};
