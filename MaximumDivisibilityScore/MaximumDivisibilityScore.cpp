class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        
        int maxScore = 0;
        
        unordered_map<int,int> divides;
        
        for(int i =0; i<divisors.size(); i++){
            int count = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j]%divisors[i]==0){
                    count++;
                }
            }
            divides[divisors[i]] = count;
            maxScore = max(maxScore, count);
        }
        
        sort(divisors.begin(), divisors.end());
        for(int i =0; i<divisors.size(); i++){
            if(divides[divisors[i]] == maxScore){
                return divisors[i];
            }
        }
        
        return divisors[0];
    }
};
