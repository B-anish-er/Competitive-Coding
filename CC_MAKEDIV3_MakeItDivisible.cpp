#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T, n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int num;
	    if(n==1){
	        cout<<3<<"\n"; 
	    }
	    else if(n==2){
	        cout<<15<<"\n";
	    }
	    else if(n==3){
	        cout<<123<<"\n";
	    }
	    else{
	        cout<<1;
	        for(int i=0;i<n-2;i++){
	            cout<<0;
	        }
	        cout<<5<<"\n";
	    }
	   
	}
	return 0;
}
