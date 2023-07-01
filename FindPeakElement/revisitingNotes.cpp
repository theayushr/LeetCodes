class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        /*
        an element whose neighbors are less than that number is known as peak element

        now see that if you found an element, and say it's not peak element, meaning there must be a number who is greater than this number
        now we check for the greater number. Again if this number is not peak there must be some element greater than this number. In this manner you will find a number who is a peak number. because the last condition would be, that the last number is peak element. That's the solution. We can use binary search in this and change mid to the greter number
        */

        int n = nums.size();
        if(n==1) return 0;
        if(n==2) return nums[0]>nums[1]?0:1;
        int low = 1;
        int high = n-2;

        /*
        one problem I am facing while solving this problem is the situation of 
        0 and n-1 index. It needes to be maintaine with various conditions.
        The better way to solve this is to leave those conditions and if we didn't 
        any any number in between, then only see these conditions
        */

        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid-1]<nums[mid] and nums[mid+1]<nums[mid]){
                return mid;
            }

            if(nums[mid-1]>nums[mid]){
                high = mid-1;
            }else if(nums[mid+1]>nums[mid]){
                low = mid+1;
            }
        }

        //we are here because we didn't get any solution in between
        //there must exist a solution and why is that we checked earlier
        //here either 0 or n-1 is the solution depending which is greater
        //than it's neighbour

        return nums[0]>nums[1]?0:n-1;
    }
};
