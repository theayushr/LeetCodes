class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> inone;
        unordered_map<int, int> intwo;

        for(auto ele:nums1){
            inone[ele]++;
        }

        for(auto ele:nums2){
            intwo[ele]++;
        }

        set<int> ansset;
        vector<int> ans;

        for(auto ele:nums1){
            if(intwo.count(ele)>0){
                ansset.insert(ele);
            }
        }

        for(auto ele:ansset){
            ans.push_back(ele);
        }
        
        return ans;
    }
};
