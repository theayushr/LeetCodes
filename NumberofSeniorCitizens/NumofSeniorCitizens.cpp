class Solution {
public:
    int countSeniors(vector<string>& details) {

        // 0-9 phone number
        //10 gender
        //11-12 age
        //13-14 seat

        int howmany = 0;
        for(int i=0; i<details.size(); i++){

            int f = int(details[i][11]) -48;
            int s = int(details[i][12]) -48;
            int age = 10*f + s;

            if(age>60){
                howmany++;
            }
        } 

        return howmany;
        
    }
};
