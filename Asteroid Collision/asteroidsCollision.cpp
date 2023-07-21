class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        for(int i=1; i<asteroids.size(); i++){

            if(i>0 and asteroids[i]<0 and asteroids[i-1]>0){

                if(asteroids[i-1]>abs(asteroids[i])){
                    asteroids.erase(asteroids.begin()+i);
                    i-=2;
                }else if(asteroids[i-1]== abs(asteroids[i])){
                    asteroids.erase(asteroids.begin()+i-1);
                    asteroids.erase(asteroids.begin()+i-1);
                    i-=2;
                }else{
                    asteroids.erase(asteroids.begin() + (i-1));
                    i-=2;
                }
            }
        }

        return asteroids;
        
    }
};
