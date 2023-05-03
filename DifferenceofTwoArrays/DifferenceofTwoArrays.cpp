class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        //brute force
        unordered_map<int,int> inone;
        unordered_map<int,int> intwo;

        for(auto ele:nums1){
            inone[ele]++;
        }

        for(auto ele:nums2){
            intwo[ele]++;
        }

        vector<int> ans0;
        vector<int> ans1;

        set<int> set0;
        set<int> set1;

        for(auto ele:nums1){
            if(intwo.count(ele)==0){
                set0.insert(ele);
            }
        }

        for(auto ele:nums2){
            if(inone.count(ele)==0){
                set1.insert(ele);
            }
        }

        for(auto ele:set0){
            ans0.push_back(ele);
        }
        for(auto ele:set1){
            ans1.push_back(ele);
        }

        return {ans0, ans1};
        
    }
};
