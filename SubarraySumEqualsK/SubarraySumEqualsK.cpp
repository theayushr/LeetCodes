class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        

        //I was thinking about doing this question using prefix sum

        vector<int> prefix;
        prefix.push_back(nums[0]);

        for(int i=1; i<nums.size(); i++){
            prefix.push_back(nums[i]+ prefix[i-1]);
        }

        unordered_map<int,int> ele;
        int times = 0;

        for(int i=0; i<prefix.size(); i++){

            if(prefix[i]==k){
                times++;
            }
            if(ele.find(prefix[i]-k)!=ele.end()){
                times+= ele[prefix[i]-k];
            }
            ele[prefix[i]]++;
        }

        return times;


        /*
        TLE o(n^2)

        int times = 0;
        int sum = 0;

        for(int i=0; i<nums.size(); i++){               
            for(int j=i; j<nums.size(); j++){
                sum+= nums[j];
                if(sum==k){
                    times++;
                }
            }
            sum = 0;
        }

        return times;
        
        */
    }
};
