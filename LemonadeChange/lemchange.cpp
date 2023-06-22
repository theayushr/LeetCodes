class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        unordered_map<int,int> coins;
        coins[5] = 0;
        coins[10] = 0;
        coins[20] = 0;
        
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5){
                coins[5]++;
            }
            else if(bills[i]==10){
                coins[10]++;
                coins[5]--;
            }
            else{
                coins[20]++;
                if(coins[10]>0){
                    coins[10]--;
                    coins[5]--;
                }else{
                    coins[5] = coins[5]-3;
                }
            }
            
            if(coins[5]<0 or coins[10]<0 or coins[20]<0){
                return false;
            }
        }
        
        return true;
        
    }
};
