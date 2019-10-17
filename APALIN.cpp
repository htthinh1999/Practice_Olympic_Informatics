#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("APALIN.INP");
	ofstream cout("APALIN.OUT");
	
	int n;
	cin>>n;
	
	if(n==1){
		cout<<0;
		return 0;
	}
	long long a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	int l=0, r=n-1, rs=0;
	while(l<r){
		if(a[l]==a[r])	l++, r--;
		if(a[l]<a[r]){
			l++;
			a[l]+=a[l-1];
			rs++;
		}
		if(a[l]>a[r]){
			r--;
			a[r]+=a[r+1];
			rs++;
		}
	}
	
	cout<<rs;
	
	return 0;
}
