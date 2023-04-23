class Solution {
public:
    bool isUgly(int n) {

        if(n==0) return false;
        int num = n;
        while(num!=1){
            if(num%2==0 or num%3==0 or num%5==0){
                if(num%2==0){
                    num/=2;
                }else if(num%3==0){
                    num/=3;
                }else{
                    num/=5;
                }
            }else{
                return false;
            }
        }
        return true;
    }
};
