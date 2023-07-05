class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> inone;
        unordered_map<int,int> intwo;

        for(int ele:nums1){
            inone[ele]++;
        }

        for(int ele:nums2){
            intwo[ele]++;
        }

        vector<int>uone;
        vector<int>utwo;

        unordered_map<int,int> :: iterator it;
        for(it = inone.begin(); it != inone.end(); it++){
            if(intwo.count(it -> first)==0){
                uone.push_back(it -> first);
            }
        }
        
        for(it = intwo.begin(); it != intwo.end(); it++){
            if(inone.count(it -> first)==0){
                utwo.push_back(it -> first);
            }
        }

        return {uone,utwo};
    }
};
