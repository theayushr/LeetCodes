class Solution {
public:
    int maxProfit(vector<int>& prices) {


        //this question is mainly abut understanding what is happing

        int profit = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]> prices[i-1]){
                profit+= prices[i] - prices[i-1];
            }
        }

        return profit;
/*
        int profit1 = 0, profit2 = 0, buy = INT_MAX;

        for(int i=0; i<prices.size(); i++){
            buy = min(buy, prices[i]);
            profit1 = max(profit1, prices[i]-buy);
        }

        int j=0;
        while(j<prices.size()-1){

            if(prices[j] < prices[j+1]){
                profit2+= prices[j+1] - prices[j];
                j+=2;
            }
            else{
                j++;
            }
        }

        return max(profit1,profit2);

  */      
    }
};
