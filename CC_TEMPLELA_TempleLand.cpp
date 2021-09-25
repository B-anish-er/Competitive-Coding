#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i = 0;i<n ;i++){
	        cin>>arr[i];
	    }
	    if(n%2==0 || (arr[0]!=1 && arr[n-1]!=1)){
	        cout<<"no"<<"\n";
	    }
	    else{
	        int count=0;
	        for(int i=0;i<(n/2);i++){
	            if((arr[i+1]-arr[i])==1){
	                count++;
	            }
	        }
	        for(int i=(n)/2; i<n;i++){
	            if((arr[i]-arr[i+1])==1){
	            count++;
	            }
	        }
	        if(count==(n-1)){
	        cout<<"yes"<<"\n";
	    }
	    else{
	        cout<<"no"<<"\n";
	    }
	    }
	    
	}
	return 0;
}
