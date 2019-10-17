#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("HOUSE.INP");
	ofstream cout("HOUSE.OUT");
	
	int n;
	cin>>n;
	long a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	long maxx=-INFINITY;
	for(int i=n-2; i>=0; i--){
		for(int j=i; j<n; j++){
			maxx=max(maxx, a[i]-a[j]);
		}
	}
	
	if(maxx==0)	cout<<"Lo nang roi!";
	else	cout<<maxx;
	
	return 0;
}
