class Solution {
public:
    int mySqrt(int x) {

        if(x==0) return 0;

        int ans = 0;

        int first = 1;
        int last = x;

        while(first <= last){

            int mid = first + (last-first)/2;
            
            if(mid == x/mid){
               return mid;
            }
            else if(mid  < x/mid){
                first = mid +1;
                ans = mid;
            }
            else{
                last = mid-1;
            }
        }

        return ans;
        
    }
};
