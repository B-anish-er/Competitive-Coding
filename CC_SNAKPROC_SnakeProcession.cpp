#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string str;
	    int h=1, t=0,count=0, val=0;
	    cin>>str;
	    for(int i=0;i<n;i++){
	        if(str[i]=='.')
	            continue;
	        if(str[i]=='H'&& h==1){
	            t=1;
	            h=0;
	            count++;
	        }
	        else if(str[i]=='T'&& t==1){
	            t=0;
	            h=1;
	            count--;
	        }
	        else{
	            val=1;
	        }
	    }
	    if(count==0 && val==0){
	        cout<<"Valid\n";
	    }
	    else{
	        cout<<"Invalid\n";
	    }
	    
	}
	return 0;
}
