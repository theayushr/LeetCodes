https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1

class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        if(N==1){
            cout<<1<<" ";
            return;
        }
        printNos(N-1);
        cout<<N<<" ";
        return;
        
    }
};
