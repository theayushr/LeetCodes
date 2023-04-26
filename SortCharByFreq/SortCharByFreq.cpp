class Solution {
public:
    string frequencySort(string s) {

        unordered_map <char, int> freq;
        string onet;

        for(auto ele:s){
            freq[ele]++;
            if(freq[ele]==1){
                onet+=ele;
            }

        }

        string ans = "";

        vector<pair<int,char>> times;

        for(auto ele:onet){
            times.push_back({freq[ele], ele});
        }

        sort(times.rbegin(), times.rend());
        for(int i=0; i<times.size(); i++){

            while(times[i].first--){
                ans+= times[i].second;
            }

        }

        return ans;

        
    }
};
