class Solution {
public:
    int maxArea(vector<int>& height) {

        int water = 0;
        int left = 0;
        int right = height.size()-1;

        while(left<right){
            water = max(water,min(height[left], height[right])*(right-left));

            height[right]<height[left] ? right-- : left++;
        }
        return water;
    }
};
