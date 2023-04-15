class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        if(nums.size()==1){
            return 0;
        }

        int start = 1;
        int end = nums.size()-2;
        int mid = start + (mid-start)/2;

        while(start<=end){

            if(nums[mid] > nums[mid-1] and nums[mid] > nums[mid+1]){
                return mid;
            }

            if(nums[mid+1] > nums[mid]){
                start = mid+1;
            }
            else if(nums[mid-1] > nums[mid]){
                end = mid-1;
            }
            mid = start + (mid-start)/2;
        }

        return (nums[0]>nums[nums.size()-1])?0:nums.size()-1;


        
        
        
        
        /*
        o(n)
        

        for(int i=1; i<nums.size()-1; i++){
            if(nums[i] > nums[i-1] and nums[i]> nums[i+1]){
                return i;
            }
        }

        return (nums[0]> nums[nums.size()-1])?0:nums.size()-1;
        */
    }

    // 4 5 6 3 9 10 23 34
};
