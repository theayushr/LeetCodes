class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int high = INT_MIN;
        int sum = 0;
        for(int i=0; i<gain.size(); i++){
            high = max(high, sum);
            sum += gain[i];
        }

        return max(high,sum);
        
    }
};
