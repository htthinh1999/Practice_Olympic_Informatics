#include<bits/stdc++.h>
using namespace std;

long long XOR(long a, long b){
	return (a|b) & (~a|~b);
}

int main(){
	
	ifstream cin("XORTABLE.INP");
	ofstream cout("XORTABLE.OUT");
	
	int n;
	cin>>n;
	long a[n];
	
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<XOR(a[i], a[j])<<" ";
		cout<<endl;
	}
	
	return 0;
}
