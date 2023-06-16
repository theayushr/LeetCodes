class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();

        unordered_map<int,int> freq;
        for(auto ele:nums){
            freq[ele]++;
        }

        vector<int> ans(n+1);
        for(int i=0; i<=n; i++){
            ans[i]=i+1;
            if(freq.find(ans[i])==freq.end()){
                return ans[i];
            }
        }
        return n+1;
    }
};
