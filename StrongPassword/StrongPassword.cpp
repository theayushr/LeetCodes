#include <iostream>
#include <string>
using namespace std;


void solution(){
    string password;
    cin>>password;
    
    int num=0, lower=0, upper = 0;
    
    for(int i=0; i<password.size(); i++ ){
        char c = password[i];
        if(isupper(c)){
            upper++;
        }else if(islower(c)){
            lower++;
        }else if(isdigit(c)){
            num++;
        }else{
            
        }
    }
    
    if( (upper>0) and (lower>0) and (num>0)){
        cout<<"YES\n";
    } 
    else{
        cout<<"NO\n";
    }
    
    
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    solution();
	}
	return 0;
}
