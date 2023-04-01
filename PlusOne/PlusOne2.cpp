class Solution {
public:
    
    vector<int> plusOne(vector<int>& digits) {
      
        //2nd method
      
        reverse(digits.begin(), digits.end());

        int i=0, flag =1;

        while(flag){

            if(i<digits.size()){
                if(digits[i] ==9){
                    digits[i] = 0;
                }
                else{
                    digits[i]+=1;
                    flag=0;
                }
            }
            else{
                digits.push_back(1);
                flag = 0;
            }

            i+=1;
        }

        reverse(digits.begin(), digits.end());
        return digits;
     
        
    }
};
