#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("TABLEDEL.INP");
	ofstream cout("TABLEDEL.OUT");
	
	int n, m, k;
	cin>>n>>m>>k;
	
	vector<int> hang(n+1, 0), cot(m+1, 0);
	for(int i=0; i<k; i++){
		int x, y;
		cin>>x>>y;
		hang[x]=1; cot[y]=1;
	}
	
	long long rsC=0, rsH=0;
	for(int i=1; i<=m; i++)
		if(cot[i]==1){
			rsC++;
		}
		
	for(int i=1; i<=n; i++)
		if(hang[i]==1){
			rsH++;
		}
	
	cout<<rsC*rsH;
	return 0;
}
