class Solution {
public:

    //if array is sorted and rotated there is only one break point
    //while if arr is sorted there is none

    bool check(vector<int>& nums){
        int count=0;
        int n =nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] > nums[(i+1)%n]){
                count++;
            }
        }

        return (count<=1);
    }


/* ohh i made all the mess but didn't use the simplest logic:

    bool isequal(vector<int>&one, vector<int>&two){
        for(int i=0; i<one.size(); i++){
            if(one[i] != two[i]){
                return false;
            }
        }
        return true;
    }

    bool check(vector<int>& nums){
        
        //brutally brutal solution
        //remove duplicates:

        unordered_set<int> brutal;
        for(auto ele:nums){
            brutal.insert(ele);
        }

        nums.clear();
        for(auto ele:brutal){
            nums.push_back(ele);
        }

        int min = nums[0], pos=0;
        for(int i=0; i<nums.size(); i++){
            if(min > nums[i]){
                min = nums[i];
                pos = i;
            }
        }

        vector <int> rot;
        int start = pos, zero =0;

        for(int i=0; i<nums.size(); i++){
            if(start <nums.size()){
                rot.push_back(nums[start]);
                start++;
            }
            else{
                rot.push_back(nums[zero]);
                zero++;
            }     
        }

        sort(nums.begin(), nums.end());
        return isequal(rot,nums);
    }
        */
   
    
};
