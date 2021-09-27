#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%4==0){
	        cout<<"YES\n";
	        vector<int> a;
    	    vector<int> b;
	        bool fl= true;
	        int x = n/2;
	        int i = 1 , j=n;
	        while(x--){
	            if(fl){
	                a.push_back(i);
	                i++;
	                fl=false;
	            }
	            else{
	                a.push_back(j);
	                j--;
	                fl = true;
	            }
	        }
	        for(int k = i; k<=j;k++)
	            b.push_back(k);
	        sort(a.begin(), a.end());
	        sort(b.begin(), b.end());
	        for(int i=0;i<(n/2);i++)
	            cout<<a[i]<<" ";
	        cout<<"\n";
	        for(int i=0;i<(n/2);i++)
	            cout<<b[i]<<" ";
	    }
	    else
	        cout<<"NO\n";
	    
	}
	return 0;
}
