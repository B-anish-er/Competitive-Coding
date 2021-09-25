#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n,greater<int>());
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=arr[k-1])
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
