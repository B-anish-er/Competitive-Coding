#include <iostream>
using namespace std;

int main() {
	int T;
	int arr[7];
	cin>>T;
	while(T--){
	    int sun = 0;
	    int rain =0;
	    for(int i =0;i<7;i++){
	        cin>>arr[i];
	        if(arr[i]==1)
	            sun++;
	        else
	            rain++;
	    } 
	    if(sun>rain){
	        cout<<"YES\n";
	    }
	    else
	        cout<<"NO\n";
	    
	}
	return 0;
}
