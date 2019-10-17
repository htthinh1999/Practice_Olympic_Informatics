#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main(){
	
	ifstream cin("TRUNGVI.INP");
	ofstream cout("TRUNGVI.OUT");
	
	int n;
	cin>>n;
	pair<long, int> a[n+1];
	for(int i=1; i<=n; i++){
		cin>>a[i].fi;
		a[i].se=i;
	}
	sort(a+1, a+n+1);
	int b[n+1];
	for(int i=1; i<=n; i++){
		if(i<=n/2)	b[a[i].se]=a[n/2+1].fi;
		else	b[a[i].se]=a[n/2].fi;
	}
	
	for(int i=1; i<=n; i++)
		cout<<b[i]<<'\n';
	
	return 0;
}
