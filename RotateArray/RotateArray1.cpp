class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> rotated;
        int n = nums.size();

        if(n<=k) k%=n;

        for(int i=n-k; i<n; i++ ){
            rotated.push_back(nums[i]);
        }

        for(int i=0; i<n-k; i++){
            rotated.push_back(nums[i]);
        }

        nums.clear();

        for(auto ele:rotated){
            nums.push_back(ele);
        }



/*
1.
        //while this sol is right, showing TLE for k=54944
        int n = nums.size();
        if(n<k) k=k%n;
        int pos =0;

        for(int i=0; i<n-k;i++){
            nums.push_back(nums[pos]);
            nums.erase(nums.begin()+pos);
        }
*/      
    }
};
