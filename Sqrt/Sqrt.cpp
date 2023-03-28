class Solution {
public:
    int mySqrt(int x) {
        for(long long i=1; i<=(x/2)+1; i++){
            if(i*i == x){
                return i;
            }
            else if(i*i > x){
                return i-1;
            }
            else{
                continue;
            }
        }
        return 0;
    }
};
