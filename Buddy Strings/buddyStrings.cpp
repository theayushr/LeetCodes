class Solution {
public:
    bool buddyStrings(string s, string goal) {

        if(s.size()!=goal.size()) return false;

        int n = s.size();
        vector<int>unmatched(2,-1); //position of the unmatched chars
        
        for(int i=0, pos = 0; i<s.size() and pos<2; i++){
            if(s[i]!=goal[i]){
                unmatched[pos] = i;
                pos++;
            }
        }

        int pos1 = unmatched[0];
        int pos2 = unmatched[1];
        if(pos1!=-1 and pos2!=-1){
            char temp = s[pos1];
            s[pos1] = s[pos2];
            s[pos2] = temp;

            if(s==goal) return true;
            return false;
        }

        if((pos1==-1 and pos2!=-1)or(pos1!=-1 and pos2==-1)) return false;

        //you are here, meaning both the string are same

        unordered_map<char,int> freq;
        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
            if(freq[s[i]]==2) return true;
        }

        return false;
    
    }
};
