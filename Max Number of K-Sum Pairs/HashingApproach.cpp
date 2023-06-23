class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        unordered_map<int,int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        int times = 0;
        for(int i=0; i<nums.size(); i++){
            int target = k - nums[i];

            if(freq[nums[i]]>0 and freq[target]>0){
                if(nums[i]!=target){
                    times += min(freq[nums[i]], freq[target]);
                    freq[nums[i]] = 0;
                    freq[target] = 0;
                }else{
                    times+= (int)freq[target]/2;
                    freq[target] = 0;
                }
            }
        }

        return times;
        
    }
};
