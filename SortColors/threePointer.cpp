class Solution {
public:
    void sortColors(vector<int>& nums) {

        //three pointers

        int low = 0;
        int high = nums.size()-1;
        int mid = 0; //traversing

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }


        
    }
};
