class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        //kadan's algorithm

        int maxEle = INT_MIN;
        int sum = 0;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            maxEle = max(maxEle, sum);

            if(sum<0){
                sum =0;
            } 
        }

        return maxEle;



/*
Obviously TLE in o(n^2) complexity;

        int n = nums.size();
        int maxsum =nums[0];
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n;j++){
                sum+=nums[j];
                maxsum = max(maxsum, sum);
            }
        }
        return maxsum;
*/      
    }
};
