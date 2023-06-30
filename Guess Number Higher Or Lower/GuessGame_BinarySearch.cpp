/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

// mid = low + (high-low)/2;

class Solution {
public:
    int guessNumber(int n) {

        int high = n;
        int low = 1;

        while(low<=high){
            int mid = low + (high-low)/2;

            int hint = guess(mid);

            if(hint == 0){
                return mid;
            }else if(hint == 1){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return -1;
    }
};
