#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("POWER3.INP");
	ofstream cout("POWER3.OUT");
	
	int n;
	cin>>n;
	long long a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	if(a[0]%3!=2)
		cout<<a[0]%3;
	else
		if(a[1]%2==0)
			cout<<1;
		else
			cout<<2;

	return 0;
}
