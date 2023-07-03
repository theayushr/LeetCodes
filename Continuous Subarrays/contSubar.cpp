class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {

        long long ans = 0;
        int n = nums.size();

        map<int,int>mp;

        int left = 0;
        for(int i=0; i<nums.size(); i++){

            mp[nums[i]]++;

            int mx = mp.rbegin()->first;
            int mn = mp.begin()->first;

            while(mx-mn>2){
                mp[nums[left]]--; //remove the first element
                if(mp[nums[left]]==0) mp.erase(nums[left]);
                left++;

                mx = mp.rbegin()->first;
                mn = mp.begin()->first;
            }

            ans += i-left+1;
        }

        return ans;
        
    }
};
