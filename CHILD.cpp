#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream cin("CHILD.INP");
	ofstream cout("CHILD.OUT");
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string a, b;
	cin>>a>>b;
	
	int m=a.length(), n=b.length();
	if(a==b){
		cout<<a.length();
		return 0;
	}else if(m<n||n<m){
		cout<<0;
		return 0;
	}
	
    a=" "+a;
    b=" "+b;
    int f[5001][5001];
    

    for (int i=1; i<=m; i++)
		for (int j=1; j<=n; j++){
	        if (a[i]==b[j]) f[i][j]=f[i-1][j-1]+1;
	        else f[i][j]=max(f[i-1][j], f[i][j-1]);
    }
    
    cout<<f[m][n];
	
	return 0;
}
