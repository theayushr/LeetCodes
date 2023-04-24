class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        while(stones.size()>1){

            sort(stones.rbegin(), stones.rend());

            if(stones[0]==stones[1]){
                stones.erase(stones.begin()+1);
                stones.erase(stones.begin());
            }
            else{
                int temp = stones[0] - stones[1];
                stones.erase(stones.begin()+1);
                stones.erase(stones.begin());
                stones.push_back(temp);
            }
        }
        
        if(stones.size()==1){
            return stones[0];
        }else{
            return 0;
        }
    }
};
