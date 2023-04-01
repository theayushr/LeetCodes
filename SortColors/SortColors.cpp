class Solution {
public:
    void sortColors(vector<int>& nums) {

        int sz = nums.size();
        map <int,int> freq;
        freq[0] = 0; 
        freq[1] = 0;
        freq[2] = 0;

        for(int i=0; i<sz; i++){
            freq[nums[i]]++;
        }

        nums.clear();

        for(int i=0; i<=2; i++){

            while(freq[i]!=0){
                nums.push_back(i);
                freq[i]--;
            }
        }
  
    }
};
