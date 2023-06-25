class Solution {
public:

    void backtracking(vector<int>&ds, vector<vector<int>>&ans, vector<int>&nums){

        //base case
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }

        for(auto ele: nums){

            if(find(ds.begin(), ds.end(), ele) == ds.end()){
                ds.push_back(ele);
                backtracking(ds, ans, nums);
                ds.pop_back();
            }

        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;

        backtracking(ds, ans, nums);
        return ans;
    }
};
