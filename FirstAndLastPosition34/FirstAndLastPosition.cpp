class Solution {
public:

    int first(vector<int>&fnums , int target){

        int s = 0, e = fnums.size()-1;
        int ans =-1;

        while(s<=e){
            int m = s + (e-s)/2;

            if(fnums[m] == target){
                ans = m;
                e = m-1;
            }
            else if(fnums[m] < target ){
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        return ans;
    }

    int last(vector<int> &lnums, int target){

        int s = 0, e = lnums.size()-1;
        int ans = -1;

        while(s<=e){
            int m= s+(e-s)/2;

            if(lnums[m] == target){
                ans = m;
                s = m+1;
            }
            else if(lnums[m] < target){
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        return ans; 
    }



    vector<int> searchRange(vector<int>& nums, int target) {

        int left = first(nums, target);
        int right = last(nums, target);

        return {left, right};
          
    }
};
