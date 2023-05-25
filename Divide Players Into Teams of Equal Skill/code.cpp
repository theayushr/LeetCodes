class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        if(skill.size()==2){
            return skill[0]*skill[1];
        }
        
        int tsum =0;
        unordered_map<int,int> freq;

        for(int i=0; i<skill.size(); i++){
            tsum += skill[i];
            freq[skill[i]]++;
        }

        int isum = 2* tsum/skill.size();

        vector<pair<int,int>> pairs;
        for(int i=0 ;i<skill.size(); i++){
            if(freq[skill[i]]>0){
                int first = skill[i];
                int second = isum - skill[i];

                if(freq[second]>0){
                    pairs.push_back({first, second});
                    freq[first]--;
                    freq[second]--;
                }else{
                    return -1;
                }
            }
        }

        long long chem = 0;
        for(int i=0; i<pairs.size(); i++){
            chem += pairs[i].first * pairs[i].second;
        }

        return chem;
        
        
    }
};
