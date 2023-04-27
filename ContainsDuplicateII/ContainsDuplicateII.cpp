class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int,int> pos; //number, position

        for(int i=0; i<nums.size(); i++){

            if(pos.count(nums[i])){
                if(abs(i-pos[nums[i]]) <=k ){
                    return true;
                }
            }
            pos[nums[i]] = i;
        }
        
        return false;

        /*is this based on hashing?

        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]==nums[j] and (j-i)<=k){
                    return true;
                }
            }
        }

        return false;
        */
    }
};
