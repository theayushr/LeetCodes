class Solution {
public:
    bool isFascinating(int n) {

        int dn = 2*n;
        int tn = 3*n;

        vector<int> nums;

        for(int i=0; i<3; i++){
            int ch1 = n%10; 
            nums.push_back(ch1);
            n/=10;

            int ch2  = dn%10;
            nums.push_back(ch2);
            dn/=10;

            int ch3 = tn%10;
            nums.push_back(ch3);
            tn/=10;
        }

        sort(nums.begin(), nums.end());

        for(int i = 0; i<9; i++){
            if(nums[i]!=i+1){
                return false;
            }
        }

        return true;
        
    }
};
