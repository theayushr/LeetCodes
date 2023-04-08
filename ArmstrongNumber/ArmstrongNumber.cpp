class Solution {
  public:
    string armstrongNumber(int n){
        int copy = n;
        int sum = 0;
        while(n>0){
            int temp = n%10;
            sum += pow(temp,3);
            n/=10;
        }
        
        if(sum==copy) 
            cout<<"Yes";
        else
            cout<<"No";
    }
};
