class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        while(k--){
            sort(gifts.rbegin(), gifts.rend());
            gifts[0] = sqrt(gifts[0]);
        }

        long long  sum = 0;
        for(auto ele:gifts){
            sum+=ele;
        }

        return sum;
        
    }
};
