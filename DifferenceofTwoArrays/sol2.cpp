class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> inone;
        unordered_map<int,int> intwo;

        int c = 0;
        for(int i=0; i<nums1.size(); i++){
            inone[nums1[i]]++;
        }

        for(int i=0; i<nums2.size(); i++){
            intwo[nums2[i]]++;
        }

        vector<int>uone;
        vector<int>utwo;

        for(auto ele:inone){
            
            if(intwo.count(ele.first)==0){
                uone.push_back(ele.first);
            }
        }
        
        for(auto ele:intwo){
            if(inone.count(ele.first)==0){
                utwo.push_back(ele.first);
            }
        }

        return {uone,utwo};
    }
};
