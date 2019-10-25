#include <bits/stdc++.h>
using namespace std;

long long nhan(long long a, long long b, long mod){
	if(b==0)	return 0;
	long long tam=nhan(a, b/2, mod);
	tam=(tam+tam)%mod;
	if(b%2==1)	return (tam+a)%mod;
	return tam;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("BALLOON.INP");
	ofstream cout("BALLOON.OUT");
	
	int n;
	long mod;
	cin>>n>>mod;
	
	long long a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	sort(a, a+n);
	long long rs=1;
	for(int i=0; i<n; i++){
		rs=nhan(rs, a[i]-i, mod);
//		cout<<rs<<endl;
	}
	
	cout<<rs;
	
	return 0;
}
