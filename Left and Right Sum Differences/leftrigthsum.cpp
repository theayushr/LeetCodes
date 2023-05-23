class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int n = nums.size();

        vector<int> leftsum(n,0);
        leftsum[0] = 0;
        for(int i=1; i<nums.size(); i++){
            leftsum[i] = leftsum[i-1]+ nums[i-1];
        }

        vector<int> rightsum(n,0);
        rightsum[n-1] =0;

        for(int i = n-2; i>=0; i--){ 
            rightsum[i] = rightsum[i+1]+ nums[i+1];
        }

        vector<int> ans(n,0);
        for(int i =0; i<nums.size(); i++){
            ans[i] = (leftsum[i]- rightsum[i]);
            if(ans[i]<0){
                ans[i]*=-1;
            }
        }

        return ans;
        
    }
};
