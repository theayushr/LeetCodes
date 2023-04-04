class Solution {
public:
    int mySqrt(int x) {

        if(x==1){
            return 1;
        }

        long long first = 0;
        long long last = x/2;

        while(first <= last){

            long long mid = first + (last-first)/2;
            
            if(mid*mid == x){
               return mid; 
            }
            else if(mid*mid < x){
                first = mid +1;
            }
            else{
                last = mid-1;
            }
        }

        return first-1;
        
    }
};
