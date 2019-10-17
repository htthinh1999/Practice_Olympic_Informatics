#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("SOSANH.INP");
	ofstream cout("SOSANH.OUT");
	
	long a, b;
	cin>>a>>b;
	
	int rs=0;
	while(a<=b){
		a*=3;
		b*=2;
		rs++;
	}
	
	cout<<rs;
	
	return 0;
}
