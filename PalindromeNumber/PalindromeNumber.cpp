class Solution {
public:
    bool isPalindrome(int x) {
      
      //complexity - o(log n)

        if( x<0 or (x%10==0 and x!=0)){
            return false;
        }

        int rev = 0;
        while(rev < x){
            rev = (rev*10) + (x%10);
            x/=10;
        }

        if((rev == x) or (x == rev/10)){
            return true;
        }else
            return false; 
    }
};
