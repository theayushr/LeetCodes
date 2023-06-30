class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        int n = potions.size();
        sort(potions.begin(), potions.end());

        vector<int>strength;
        for(int i=0; i<spells.size(); i++){
            int low = 0;
            int high = n-1;

            int ind = n;
            while(low<=high){
                int mid = low + (high-low)/2;
                long long mul = (long long)spells[i]*(long long)potions[mid];
                
                if(mul>=success){
                    high = mid-1;
                    ind = mid;
                }else{
                    low = mid+1;
                }
            }
            strength.push_back(n-ind);
        } 
        return strength;
    }
};
