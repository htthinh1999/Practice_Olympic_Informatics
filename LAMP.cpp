#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("LAMP.INP");
	ofstream cout("LAMP.OUT");
	
	int n, q;
	cin>>n>>q;
	
	int a[n+1]={0};
	int x, y;
	for(int i=0; i<q; i++){
		cin>>x>>y;
		for(int j=x; j<=y; j++)
			a[j]++;
	}
	for(int i=1; i<=n; i++){
		cout<<a[i]%2<<" ";
	}
	
	return 0;
}
