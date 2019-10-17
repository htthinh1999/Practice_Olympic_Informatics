#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ifstream cin("SUMN.INP");
	ofstream cout("SUMN.OUT");
	
	long m, n, k;
	cin>>m>>n>>k;
//	long m=1000, n=100000000, k=1;
	if(k==1){
		cout<<(long long)(m+1)*(n+1);
		return 0;
	}
	long minn=min(m, n);
	int i=0;
	long long rs=0;
	long long temp=i*k;
	while(temp<=m+n){
//		cout<<temp<<endl;
		rs+=temp+1;
		rs-=max(0LL, temp-m);
		rs-=max(0LL, temp-n);
		i++;
		temp=i*k;
	}
	
	cout<<rs;
	
	return 0;
}
