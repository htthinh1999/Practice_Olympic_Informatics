#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("THANGMAY.INP");
	ofstream cout("THANGMAY.OUT");
	
	int n, k;
	cin>>n>>k;
	
	int a[n+1];
	a[0]=0;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	
	sort(a, a+n+1);
	
	int j=n;
	long rs=0;
	while(j>=1){
		rs+=(a[j]-1)*2;
		j-=k;
	}
	
	cout<<rs;
	
	return 0;
}
