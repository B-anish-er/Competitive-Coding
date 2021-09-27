#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll t;
	cin>>t;
	while(t--){
	    ll p,a,b,c,x,y;
	    cin>>p>>a>>b>>c>>x>>y;
	    ll ans = min((x*a+b),(y*a+c));
	    ans=p/ans;
	    cout<<ans<<endl;
	}
	return 0;
}
