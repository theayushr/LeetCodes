class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        
        long long sc1=player1[0];
        long long sc2=player2[0];
        
        if(player1.size()==1){
            if(sc1>sc2){
                return 1;
            }else if(sc2>sc1){
                return 2;
            }
            return 0;   
        }
        
        if(sc1==10){
            sc1 +=2*player1[1];
        }else{
            sc1 += player1[1];
        }
        
        if(sc2==10){
            sc2 +=2*player2[1];
        }else{
            sc2 += player2[1];
        }
        
        for(int i=2; i<player1.size(); i++){
            if(player1[i-1] ==10 or player1[i-2]==10){
                sc1 += 2*player1[i];
            }else{
                sc1 += player1[i];
            }
        }
        
        for(int i=2; i<player2.size(); i++){
            
            if(player2[i-1]==10 or player2[i-2]==10){
                sc2 += 2*player2[i];
            }else{
                sc2 += player2[i];
            }
        }
        
        if(sc1>sc2){
            return 1;
        }else if(sc2>sc1){
            return 2;
        }
        
        return 0;
    }
};
