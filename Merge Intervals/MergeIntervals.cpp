class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end());
    
        int left = intervals[0][0];
        int right = intervals[0][1];

        for(int i=0; i<n-1; i++){

            if(right>=intervals[i+1][0]){
                right = max(right, intervals[i+1][1]);
            }else{
                ans.push_back({left, right});
                left = intervals[i+1][0];
                right = intervals[i+1][1];
            }
        }
        ans.push_back({left, right});
        return ans;
    }
};
