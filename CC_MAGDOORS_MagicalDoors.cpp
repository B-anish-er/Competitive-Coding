#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    char flag ='1';
	    int count = 0;
	    for(int i = 0; i<str.size(); i++){
	        if(str[i] != flag){
	            count++;
	            flag = str[i];
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
