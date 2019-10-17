#include<bits/stdc++.h>
using namespace std;

int n;
int a[100001];

int main(){
	
	ifstream cin("SUMSUB.INP");
	ofstream cout("SUMSUB.OUT");
	
	int t;
	cin>>t;
	
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++)
			cin>>a[i];
		
		long long rs1=0, maxx=-INFINITY, minn=INFINITY;
		long long f[n+1];
		f[0]=0;
		for(int i=1; i<=n; i++){
			if(a[i]>0)	rs1+=a[i];
			f[i]=max(f[i-1]+a[i], 0LL);
			maxx=max(maxx, f[i]);
			minn=min(minn, f[i]);
//			cout<<rs1<<" "<<minn<<" "<<maxx<<endl;
		}
		
		if(rs1==0){
			int rs=*max_element(a+1, a+n+1);
			cout<<rs<<' '<<rs<<"\n";
		}else{
			cout<<rs1<<' '<<max(maxx, maxx-minn)<<"\n";
		}
	}
	
	return 0;
}
