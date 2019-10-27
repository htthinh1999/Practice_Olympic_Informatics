#include<bits/stdc++.h>
using namespace std;

int main(){
	
//	ifstream cin(".INP");
//	ofstream cout(".OUT");
	
	int t;
	cin>>t;
	while(t--){
		int a, b, c;
		cin>>a>>b>>c;
		
		int maxx=max(a, max(b, c));
		int minn=min(a, min(b, c));
		int mid;
		if(a!=maxx&&a!=minn)	mid=a;
		if(b!=maxx&&b!=minn)	mid=b;
		if(c!=maxx&&c!=minn)	mid=c;
		
		cout<<max(abs(maxx-mid-1), abs(mid-minn-1))<<'\n';
	}
	
	return 0;
}
