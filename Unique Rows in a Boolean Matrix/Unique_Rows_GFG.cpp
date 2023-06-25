//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);
// } Driver Code Ends





class Solution
{
    public:
    // #define MAX 1000

    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col) {
      
        vector<vector<int>> ans;
        map<vector<int>,int> freq;
        
        vector<int> frow; //first row
        //it would be much better if the given matrix is in the form of vector
        for(int i=0; i<col; i++){
            frow.push_back(M[0][i]);
        }
        ans.push_back(frow);
        freq[frow]++;
        
        for(int i=1; i<row; i++){
            
            vector<int> vrow; //trace the row
            for(int j=0; j<col; j++){
                vrow.push_back(M[i][j]);
            }
            
            if(freq.find(vrow)==freq.end()){
                ans.push_back(vrow);
                freq[vrow]++; //dont forget to put it to the hashtable
            }
        }
        
        return ans;
        
        
    }
};






//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	Solution ob;
    	vector<vector<int>> vec = ob.uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends
