#include<bits/stdc++.h>
using namespace std;

int XOR(int a, int b){
	return (~a&b)|(a&~b);	
}

int main(){
	
	ifstream cin("AMASEQ.INP");
	ofstream cout("AMASEQ.OUT");
	
	int n;
	long t;
	cin>>n>>t;
	
	long a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	long maxx=a[0], minn=a[0];
	int length=1;
	int rs=0;
	for(int i=0; i<n; i++){
		maxx=a[i], minn=a[i];
		length=1;
		int j=i+1;
		while(j<n&&rs<=n-i){
			maxx=max(maxx, a[j]);
			minn=min(minn, a[j]);
			if(maxx-minn<=t)
				length++;
			else break;
			j++;
		}
		rs=max(rs, length);
	}
	
	cout<<rs;
	
	return 0;
}
