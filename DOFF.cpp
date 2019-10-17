#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("DOFF.INP");
	ofstream cout("DOFF.OUT");
	
	/* 
		7  -> 2 2
		8  -> 2 3
		9  -> 2 4
		10 -> 2 4
		11 -> 2 4
		12 -> 2 4
		13 -> 3 4
		14 -> 4 4
	*/
	
	long long n;
	cin>>n;
	
	if(n==1) cout<<"0 1";
	else if(n<6)	cout<<"0 2";
	else if(n==6)	cout<<"1 2";
	else if((n+1)%7==0)	cout<<n/7*2+1<<" "<<n/7*2+2;
	else if(n%7==0)	cout<<n/7*2<<" "<<n/7*2;
	else if((n-1)%7==0)	cout<<n/7*2<<" "<<n/7*2+1;
	else cout<<n/7*2<<" "<<n/7*2+2;
	
	return 0;
}
