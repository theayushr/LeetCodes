class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        vector<string> ans; //names sorted according to height

        unordered_map <int, string> mp;
        for(int i=0; i<heights.size(); i++){
            mp[heights[i]] = names[i]; //since all heights are distinct
        }

        sort(heights.rbegin(), heights.rend());
        for(int i=0; i<heights.size(); i++){
            ans.push_back(mp[heights[i]]);
        }

        return ans;


        
    }
};
