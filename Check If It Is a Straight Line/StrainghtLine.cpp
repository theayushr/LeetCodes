class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        //slope = y2-y1/x2-x1

        if(coordinates.size()==2){
            return true;
        }

        //sort(coordinates.begin(), coordinates.end());

        int delx = coordinates[1][0] - coordinates[0][0];
        int dely = coordinates[1][1] - coordinates[0][1];
        //double slope = dely/delx;

        for(int i=1; i<coordinates.size(); i++){

            int delx2 = coordinates[i][0] - coordinates[0][0];
            int dely2 = coordinates[i][1] - coordinates[0][1];

            //double slope2 = dely2/delx2;

            if(dely*delx2!=dely2*delx){ //slope!=slope2
                return false;
            }
            
        }
        
        return true;



        
    }
};
