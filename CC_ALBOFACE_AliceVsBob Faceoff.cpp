#include <bits/stdc++.h>
using namespace std;

bool power(int n){
    if(n!=0 && (n & (n-1))==0)
        return true;
    else
        return false;
}

void calc(){
	    int n;
	    cin>>n;
	    map<int, int>a;
	    
	    int i=2;
	    
	    if(n==1){
	        cout<<"Alice\n";
	        return;
	    }
	    
	    if(n==2){
	        cout<<"Bob\n";
	        return;
	    }
	    
	    if(n%2==0){
	        if(power(n+2)==true)
	            cout<<"Bob\n";
	        else
	            cout<<"Alice\n";
	        return;
	    }
	    
	    if(n%2!=0){
	        if(power(n+1)==true)
	            cout<<"Alice\n";
	        else
	            cout<<"Bob\n";
	        return;
	    }
	    return;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    calc();
	}
	return 0;
}
