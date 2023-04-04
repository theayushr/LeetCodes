class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());
        int value = 0;

        for(int i=0; i<n-1; i+=2){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
        }
        return nums[n-1];



        // unordered_map<int,int> freq;
        // int value = 0;

        // for(int i=0; i<nums.size(); i++){
        //     freq[nums[i]]++;
        // }

        // for(int i=0; i<nums.size(); i++){
        //     if(freq[nums[i]] == 1){
        //         value = nums[i];
        //         break;
        //     }
        // }

        // return value;    
    }

};
