#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("AVEMAX.INP");
	ofstream cout("AVEMAX.OUT");
	
	int n;
	cin>>n;
	long a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	cout<<*max_element(a, a+n);
	
	return 0;
}
