class Solution {
public:
    int maxArea(vector<int>& height) {


//below is brute force solution that has o(n2) and won't work for large inputs. But it works that means I understand the problem

//instead making the array can we use max?

        //vector<int> volume;
        int maxi = 0;
        for(int i=0; i<height.size()-1; i++){
            for(int j =i+1; j<height.size(); j++){
                int small = min(height[i], height[j]);
                //volume.push_back(small*(j-i));
                maxi = max(maxi, small*(j-i));
            }
        }
        //sort(volume.rbegin(), volume.rend());
        //return volume[0];

        return maxi;
    }
};
