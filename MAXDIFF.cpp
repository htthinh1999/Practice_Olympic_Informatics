#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("MAXDIFF.INP");
	ofstream cout("MAXDIFF.OUT");
	
	int n;
	cin>>n;
	
	vector<long> a(n+1, 0);
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	long maxx=-INFINITY, rs=-INFINITY;
	for(int i=0; i<n; i++){
		for(int j=1; j<n; j++){
			if(j==i)	maxx=max(maxx, a[j+1]-a[j-1]);
			else if(j+1==i||j-1==i)	continue;
			else	maxx=max(maxx, a[j]-a[j-1]);
		}
		rs=max(maxx, rs);
	}
	
	cout<<rs;
	
	return 0;
}
