class Solution{
public:	
	int print2largest(int arr[], int n) {
	    
	    int max = arr[0];
	    for(int i=1; i<n;i++){
	        if(arr[i] >=max){
	            max = arr[i];
	        }
	    }
	    
	    int max2 = -1;
	    for(int i=0; i<n; i++){
	        if(arr[i]!=max and arr[i] >=max2){
	            max2 = arr[i];
	        }
	    }
	    
	    return max2;
	    
	    
	    
	}
};
