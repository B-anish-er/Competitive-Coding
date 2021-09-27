#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,p,x,y;
	cin>>t;
	while(t--){
	    cin>>n>>p>>x>>y;
	    p--;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int time=0;
	    
	    for(int i=0;i<=p;i++){
	        if(arr[i]==0)
	            time+= x;
	        else if(arr[i]==1)
	            time+=y;
	    }
	    cout<<time<<"\n";
	    
	}
	return 0;
}
