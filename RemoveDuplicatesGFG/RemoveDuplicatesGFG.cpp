//link = https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1


//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
        /*
        int pos = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(a[pos] == a[pos+1]){
                a[pos+1] = a[pos+2];
            }
            else{
                pos++;
                count++;
            }
        }
        
        return count;
        */
        
        int pos = 0;

        for(int i=1; i<n; i++){
            if(arr[i]!=arr[pos]){
                arr[pos+1] = arr[i];
                pos++;
            }
        }
        
        return pos+1;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends
