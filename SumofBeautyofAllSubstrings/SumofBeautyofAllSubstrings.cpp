class Solution {
public:
    int beautySum(string s) {

        int ans = 0;
        int n = s.size();

        for(int i=0; i<n; i++){

            unordered_map<char,int> freq;
            multiset<int> times;
            for(int j=i; j<n; j++){
                if(times.find(freq[s[j]])!=times.end()){
                    times.erase(times.find(freq[s[j]]));
                }

                freq[s[j]]++;
                times.insert(freq[s[j]]);

                ans+= (*times.rbegin() - *times.begin());
            }   
        }

        return ans;
        
    }
};
