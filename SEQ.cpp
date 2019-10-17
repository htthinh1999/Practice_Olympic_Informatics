#include<bits/stdc++.h>
#include<fstream>
#define fi first
#define se second
using namespace std;
const int MA=1e5+1;
typedef pair<int,int>ii;
ii C[MA];
int A[MA],B[MA],L,n,tmax,kmax,k;
bool cmp(const ii &a,const ii &b)
{
	return a.first>b.first;
}
main()
{
	ifstream cin("SEQ.INP");
	ofstream cout("SEQ.OUT");
	cin>>n>>k;
	for (int i=1;i<=n;i++)
	cin>>C[i].fi;
	for (int i=1;i<=n;i++)
	cin>>C[i].se;
	sort(C+1,C+n+1,cmp);
//	for (int i=1;i<=n;i++)
	//cout<<C[i].fi<<" "<<C[i].se<<endl;
	for (int i=1;i<=k;i++)
	tmax=max(tmax,C[i].se);
	kmax=C[k].fi+tmax;
	for (int i=k+1;i<=n;i++)
	{
		tmax=max(tmax,C[i].se);
		kmax=max(kmax,C[i].first+tmax);
	} 
	cout<<kmax;
}
