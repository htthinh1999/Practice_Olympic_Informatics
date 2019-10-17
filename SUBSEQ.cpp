#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("SUBSEQ.INP");
	ofstream cout("SUBSEQ.OUT");
	
	int n, q;
	cin>>n>>q;
	
	long long a[n], maxx=-INFINITY;
	for(int i=0; i<n; i++){
		cin>>a[i];
		maxx=max(maxx, a[i]);
	}
	
	for(int k=0; k<q; k++){
		int l, r;
		cin>>l>>r;
		int length=0, rs=0;
		map<long long, int> xh;
		
		for(int i=l; i<=r; i++){
			for(int j=i; j<=r; j++){
				if(xh[a[j]]==0){
					xh[a[j]]++;
					length++;
				}else	break;
			}
			rs=max(rs, length);
			length=0;
			map<long long, int> temp;
			xh=temp;
		}
		cout<<rs<<endl;
	}
	
	return 0;
}
