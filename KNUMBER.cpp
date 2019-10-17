#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("KNUMBER.INP");
	ofstream cout("KNUMBER.OUT");
	
	int n, k;
	cin>>n>>k;
	long long a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
		
	sort(a, a+n);
	cout<<a[k-1];
	return 0;
}
