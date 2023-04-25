class Solution {
public:
    long long calTime(int mid, vector<int>& piles){
            long long sum = 0;
            for(auto ele:piles){
                sum += ele/mid + (ele % mid!=0);
            }
            return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h){


        //her solution, alisha

        int low = 1; 
        int high = *max_element(piles.begin(), piles.end());

        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            long long time = calTime(mid,piles);

            if(time<=h){
                ans = mid;
                high = mid-1;
            }else {
                low= mid+1;
            }

        }
        return ans;
        
        }


/*
        //binary search but same logic

        if(piles.size()==1){
            if(piles[0]%h==0){
                return 1;
            }else{
                return 2;
            }
        }

        int max = piles[0];
        int min = 1, mid = 0;
        for(auto ele: piles){
            if(ele>=max) max =ele;
        }


        while(max>=min){
            mid = min + (max-min)/2;

            int time = 0;
            for(int i=0; i<piles.size(); i++){
                if(piles[i]%mid == 0){
                    time+= piles[i]/mid;
                }else{
                    time+=piles[i]/mid +1;
                }
            }

            if(time == h){
                return mid;
            }
            else if(time > h){
                min = mid+1;

            }else{
                max = mid-1;
            }
        }

        return mid;
        }

*/

/*
        //brute forces solution

        long long max = piles[0];
        for(auto ele: piles){
            if(ele>=max){
                max = ele;
            }
        }

        
        for(long long  i=1; i <=max; i++ ){
            long long time = 0;
            for(long long j = 0; j<piles.size(); j++){
                if(piles[j] % i ==0){
                    time += piles[j]/i;
                }else{
                    time += piles[j]/i +1;
                }
            }

            if(time==h){
                return i;
            }
        }
        return max;   
    }

    */

};
