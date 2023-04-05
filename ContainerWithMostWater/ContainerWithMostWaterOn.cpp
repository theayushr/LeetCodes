class Solution {
public:
    int maxArea(vector<int>& height) {
      
     
    /*  here you need to understand why we are increasing 
        and decreasing the value of i and j.

        See we have to take min of height[i] and height[j].
        And if we increase the i or decrease the j which ever is least it will not 
        change the max water capacity. Because no matter how big the other height is, we have
        to take min of both height i.e i or j's height.

        See if(i<j) where i is initial pointer and j is least pointer, the max volume of water
        container having i edge can take is with j, the least pointer as we have to take height
        as i and distace is max with j. And same the case with other things. 

        I got to the solution and yes on my own. I just looked at the discussion but 
        I don't know why people are confused.

*/

     
        int i=0; 
        int j= height.size()-1;
        int water = 0;

        while(i<=j){
            int mini = min(height[i], height[j]);
            water = max(water, mini*(j-i));

            if(height[i] < height[j]){
                i++;
            }
            else if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
            }
        }

        return water;


    }
};
