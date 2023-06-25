class Solution {
public:

    vector<vector<int>> combinations(int ind, vector<vector<int>>&ans, vector<int>&nums, vector<int>&ds){

        //base condition
        if(ind == nums.size()){
            ans.push_back(ds);
            return ans;
        }

        //pick it
        ds.push_back(nums[ind]);
        combinations(ind+1, ans, nums, ds);
        ds.pop_back();

        //not pick it
        combinations(ind+1, ans, nums, ds);

        return ans;
    }


    vector<vector<int>> subsets(vector<int>& nums) {

        set<int> s(nums.begin(), nums.end());
        vector<int> arr;
        for(auto ele:s){
            arr.push_back(ele);
        }

        vector<int>ds;
        vector<vector<int>> ans;
        return combinations(0,ans,arr, ds);
    }
};
