#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main(){
	
	ifstream cin("CONDE.INP");
	ofstream cout("CONDE.OUT");
	
	long long n;
	cin>>n;

	if(n==0){
		cout<<0;
		return 0;
	}
	if(n==1){
		cout<<1;
		return 0;
	}
	
	int t=0;
	
	while(++t){
		long long rs=0;
		for(int i=1; i<=t; i++){
			rs+=i*(t-i+1);
		}
		if(rs+t*(t+1)/2>n+1)	break;
	}
	
	cout<<t-1;
	
	return 0;
}
