class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        
        
        map<int,int> pos; // pos and marble_present(1,0)
        
        for(auto ele:nums){
            if(pos.find(ele)==pos.end()){
                pos[ele] = 1;
            }
        }
        
        for(int i=0; i<moveFrom.size(); i++){
            int to = moveTo[i];
            int from = moveFrom[i];
            
            pos[from] = 0;
            pos[to] = 1;
        }
        
        
        vector<int> ans;
        for(auto ele:pos){
            if(ele.second==1){
                ans.push_back(ele.first);
            }
        }
        
        return ans;
        
    }
};
