class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = prices[0], sell =prices[0], profit = 0;

        for(int i=1; i<prices.size(); i++){
            if(buy > prices[i]){
                buy = prices[i];
                //sell = prices[i];
            }else if(buy < prices[i]){
                sell = prices[i];
                profit = max(profit, sell-buy);
            }
        }

        return profit;






        /*

        //brute force o(n^2)
        //199 / 211 testcases pass but obviously TLE

        int maxp = 0;
        for(int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                int profit = prices[j] - prices[i];
                if(profit >= maxp){
                    maxp = profit; 
                }
            }
        }

        return maxp;
        */      
    }
};
