#include<bits/stdc++.h>
using namespace std;

long long cal(long long n){
	if(n==-1)	return 0;
	return n/4+n/7+n/11-n/28-n/44-n/77+n/(4*7*11)+1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("DIVISIBLE.INP");
	ofstream cout("DIVISIBLE.OUT");
	
	int t;
	cin>>t;
	while(t--){
		long long l, r;
		cin>>l>>r;
		cout<<cal(r)-cal(l-1)<<endl;
	}
	
    return 0;
}
