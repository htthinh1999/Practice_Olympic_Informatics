#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ifstream cin("SBOX.INP");
	ofstream cout("SBOX.OUT");
	
	int n;
	cin>>n;
	vector<long> a(n), b(n);
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
		cin>>b[i];
	
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	
	long long rs=1;
	int temp=0;
	for(int i=0; i<n; i++){
		int count=0;
		for(int j=0; j<n; j++){
			if(a[i]<b[j]){
				count++;
			}
		}
		rs*=max(1, count-temp++);
	}
	
	cout<<rs;
	
	return 0;
}
