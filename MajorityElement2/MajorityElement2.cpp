class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        if(nums.size()<3){
            set<int> un;
            vector <int> an;
            for(auto ele:nums){
                un.insert(ele);
            }
            for(auto ele:un){
                an.push_back(ele);
            }

            return an;
        }

        int times = 1;
        int n= nums.size()/3;
        sort(nums.begin(), nums.end());

        set<int> unique;
        vector<int> ans;

        for(int i=1; i<nums.size(); i++){

            if(nums[i]==nums[i-1]){
                times++;
            }else{
                times = 1;
            }

            if(times>n){
                unique.insert(nums[i-1]);
            }
        }

        for(auto ele:unique){
            ans.push_back(ele);
        }

        return ans;
        
    }
};
