class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        if(mainTank<5){
            return 10*mainTank;
        }
        
        int dis = 0;
        
        while(mainTank>=5){
            
            dis+=5*10;
            mainTank-=5;
            
            if(additionalTank>0){ 
                mainTank+=1;
                additionalTank-=1;
            } 
        }
        
        dis+=10*mainTank;
        
        return dis;
        
    }
};
