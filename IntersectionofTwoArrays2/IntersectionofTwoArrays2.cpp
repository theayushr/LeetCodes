class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> intwo;
        for(auto ele:nums2){
            intwo[ele]++;
        }

        vector<int> ans;
        for(auto ele: nums1){
            if(intwo[ele]>0){
                ans.push_back(ele);
                intwo[ele]--;
            }
        }

        return ans;
        
    }
};
