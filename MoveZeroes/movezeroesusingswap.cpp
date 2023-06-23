class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int nonz = 0;
        for(int i=0; i<nums.size(); i++){

            if(nums[i]==0){
                int nonz = i;
                while(nonz <nums.size() and nums[nonz]==0 ){
                    nonz++;
                }
                if(nonz<nums.size())
                    swap(nums[i], nums[nonz]);
            }
        }
        
    }

};
