class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      
        int start =0;
        int end = nums.size() -1;

        //corner cases causing WA
        if(target > nums[end]){
            return nums.size();
        }
        if(target < nums[start]){
            return start;
        }
        if(target == nums[start]){
            return start;
        }
        if(target == nums[end]){
            return end;
        }

        //main algorithm

        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] < target){
                start = mid+1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                return mid;
            }
        }
        
        return start;
      
    }
};
