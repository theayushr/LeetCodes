class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        if(nums.size()==1){
            if(nums[0]==1){
                return 2;
            }else{
                return 1;
            }
        }

        vector<int> pos;
        set<int> unique;
        sort(nums.begin(), nums.end());

        for(auto ele:nums){
            if(ele>0){
                unique.insert(ele);
            }
        }

        for(auto ele:unique){
            pos.push_back(ele);
        }

        int n = pos.size();

        if(n==0){
            return 1;
        }

        for(int i=0; i<pos.size(); i++){
            if(pos[i]!=i+1){
                return i+1;
            }
        }

        return pos[n-1]+1;
        
    }
};
