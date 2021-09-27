#include <iostream>
using namespace std;

int main() {
	int t,m,n,k;
	cin>>t;
	while(t--){
	    cin>>m>>n>>k;
	    if(m>(n*k)){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
