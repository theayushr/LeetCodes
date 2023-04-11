class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> ans;
        vector<int>pos;
        vector<int>neg;

        for(auto ele: nums){
            if(ele>=0){
                pos.push_back(ele);
            }
            else{
                neg.push_back(ele);
            }
        }

        for(int i=0; i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;
        
    }
};
