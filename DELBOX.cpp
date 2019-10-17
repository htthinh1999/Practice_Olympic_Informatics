#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("DELBOX.INP");
	ofstream cout("DELBOX.OUT");
	
	int n, m;
	cin>>n>>m;
	
	long a[n][m];
	vector<long> ngang(n, 0);
	vector<long> doc(m, 0);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
			ngang[i]=max(ngang[i], a[i][j]);
			doc[j]=max(doc[j], a[i][j]);
		}
	}
	
//	for(int i=0; i<doc.size(); i++)
//		cout<<doc[i]<<" ";
	
	long long rs=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(a[i][j]<min(ngang[i], doc[j]))
				rs+=a[i][j];
	
	cout<<rs;
	return 0;
}
