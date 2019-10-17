#include<bits/stdc++.h>
#include <fstream>
using namespace std;

int64_t n,res,a[1005];
map<int64_t,int64_t> M;

main() 
{
	ifstream fin("Count.INP");
	ofstream fout("Count.OUT");
	cin>>n;
	for(int64_t i=1;i<=n;i++)
		cin>>a[i];
		
	cout<<endl;
	for(int64_t i=1;i<=n;i++)
	{
		for(int64_t j=i+1;j<=n;j++){
			res+=M[a[i]+a[j]];
			cout<<i<<" "<<a[i]<<" "<<a[j]<<" "<<a[i]+a[j]<<" "<<M[a[i]+a[j]]<<endl;
		}
		cout<<"Het vong 1"<<endl;
		
		for(int64_t j=1;j<i;j++){
			M[a[i]+a[j]]++;
			cout<<i<<" "<<a[i]<<" "<<a[j]<<" "<<a[i]+a[j]<<" "<<M[a[i]+a[j]]<<endl;
		}
		cout<<"Het vong 2"<<endl;
	}
	cout<<res;
}
