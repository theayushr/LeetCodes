class Solution {
public:

    void permutations(vector<vector<int>>&ans, vector<int>ds, unordered_map<int,int>&freq, vector<int>&nums){

        //base case
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }

        for(auto ele:nums){
            if(freq[ele]==0){

                //pick it
                ds.push_back(ele);
                freq[ele] = 1;
                permutations(ans, ds, freq, nums);

                ds.pop_back();
                freq[ele] = 0;
            }
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int>ds;
        unordered_map<int,int> freq;

        permutations(ans, ds, freq, nums);

        return ans;
    }
};
