#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("PS.INP");
	ofstream cout("PS.OUT");
	
	int t;
	cin>>t;
	for(int k=0; k<t; k++){
		int n;
		cin>>n;
		
		long long a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
			
		long long f[n];
		f[n-1]=a[n-1];
		for(int i=n-2; i>=0; i--){
			f[i]=min(f[i+1], a[i]);
		}
		
		vector<long long> rs;
		long long maxx=-INFINITY;
		for(int i=0; i<n-1; i++){
			maxx=max(maxx, a[i]);
//			cout<<i+1<<" "<<maxx<<" "<<f[i+1]<<endl;
			if(maxx<=f[i+1])	rs.push_back(i+1);
		}
		
		cout<<rs.size()<<endl;
		for(int i=0; i<rs.size(); i++)
			cout<<rs[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}
