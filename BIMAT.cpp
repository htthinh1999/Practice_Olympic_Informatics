#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("BIMAT.INP");
	ofstream cout("BIMAT.OUT");
	
	string s;
	cin>>s;
	
	int m, n;
	for(int i=(int)sqrt(s.length()); i>0; i--){
		if(s.length()%i==0){
			m=i;
			n=s.length()/i;
			break;
		}
	}
	if(m>n){
		m+=n;
		n=m;
		m=n-m;
		n=n-m;
	}
	
	char a[m][n];
	int temp=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			a[j][i]=s[temp++];
		}
	}
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j];
		}
	}
	
	return 0;
}
