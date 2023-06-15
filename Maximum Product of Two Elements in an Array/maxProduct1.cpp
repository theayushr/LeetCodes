class Solution {
public:
    int maxProduct(vector<int>& nums) {

        //we just need to find max1 and max2

        int m1 = 0; int m2 = 0;

        for(auto ele:nums){
            if(ele>=m1){
                m2 = m1;
                m1 = ele;
            }

            else if(ele<m1 and ele>m2){
                m2 = ele;
            }
        }

        return --m1 * --m2;
        
    }
};
