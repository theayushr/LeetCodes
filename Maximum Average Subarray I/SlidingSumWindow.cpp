class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int sum = 0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }

        double maxsum = sum;
        for(int i=1; i<=nums.size()-k; i++){
            sum = sum - nums[i-1] + nums[k+i-1];
            maxsum = sum>maxsum ? sum : maxsum;
        }

        double maxAvg = maxsum/k;

        return maxAvg;
        
    }
};
