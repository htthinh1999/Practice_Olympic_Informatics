#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main(){
	
	ifstream cin("FUNCTION.INP");
	ofstream cout("FUNCTION.OUT");
	
	int m, n;
	cin>>n>>m;
	
	bool a[n+1];
	for(int i=1; i<=n; i++)
		cin>>a[i];
	bool b[m+1];
	for(int i=1; i<=m; i++)
		cin>>b[i];
	
//	int f[m+2];
//	f[m+1]=0;
//	for(int i=m; i>0; i--){
//		f[i]=f[i+1]+b[i];
//	}
	
//	for(int i=1; i<=m; i++)
//		cout<<f[i]<<" ";
	
	long long rs=0;
	for(int i=1; i<=n-m+1; i++){
		int s=0;
		for(int j=i; j<=i+m-1; j++)
			s+=a[j]*b[j-i+1];
		rs=max(rs, s);
	}
	
	cout<<rs;
	
	return 0;
}
