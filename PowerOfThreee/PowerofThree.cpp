class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int power = 0;
      
        while(n>=pow(3,power)){
            if(n==pow(3,power)){
                return true;
            }
            power++;
        }

        return false;
    }
};
