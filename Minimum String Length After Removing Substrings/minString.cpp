class Solution {
public:
    int minLength(string s) {

        bool loop = true;
        while(loop){

            int times = 0;

            for(int i=1; i<s.size(); i++){

                string sub = s.substr(i-1,2);

                if(sub =="AB" or sub=="CD"){
                    s = s.substr(0, i-1) + s.substr(i+1, s.size()-2);
                    times = 1;
                }
            }

            if(times == 0){
                loop = false;
            }

        }

        return s.size();
        
    }
};
