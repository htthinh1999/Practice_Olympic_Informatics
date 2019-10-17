#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("SOCOLA.INP");
	ofstream cout("SOCOLA.OUT");
	
	int n;
	cin>>n;
	long rs=0;
	for(int i=0; i<=n/3; i++){
		rs+=(n-3*i)/2+1;
	}
	cout<<rs;
	
	return 0;
}
