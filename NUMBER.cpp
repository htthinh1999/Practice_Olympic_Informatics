#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("NUMBER.INP");
	ofstream cout("NUMBER.OUT");
	
	int n;
	cin>>n;
	int a[n];
	long long rs=0;
	for(int i=0; i<n; i++){
		long x;
		cin>>x;
		rs+=x/2;
		a[i]=x%2;
	}
	
	for(int i=0; i<n-1; i++){
		if(a[i]>0&&a[i+1]>0){
			rs++;
			a[i]=0;
			a[i+1]=0;
		}
	}
	
	cout<<rs;
	
	return 0;
}
