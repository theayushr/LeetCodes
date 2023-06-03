class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> freq;
        for(auto ele:arr){
            freq[ele]++;
        }

        vector<int> times;
        for(auto ele:freq){
            times.push_back(ele.second);
        }

        sort(times.begin(), times.end());

        for(int i=1; i<times.size(); i++){
            if(times[i]==times[i-1]){
                return false;
            }
        }

        return true;
        
    }
};
