class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {

        if(n==1){
            return {};
        }

        unordered_map<int,int> times;
        vector<int> pass;
        vector<int> ans;

        //initial condition

        int cur = 1;
        int i = 0;
        times[cur]++;
        pass.push_back(1);

        while(times[cur]<=1){
            i++;
            cur += k*i;
            cur = (cur - 1) % n + 1;
            pass.push_back(cur);
            times[cur]++;
        }

        sort(pass.begin(), pass.end());

        int check = 0;
        for(int i=1; i<=n; i++){
            if(times[i]==0){
                ans.push_back(i);
            }
        }

        return ans;

    }
};
