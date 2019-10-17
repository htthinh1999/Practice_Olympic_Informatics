#include<bits/stdc++.h>
#include<fstream>
#define fi first
#define se second
using namespace std;
const int MA=1e5+1;
struct node{
	int a,b,c,v;
}D[MA];
int F[10001][10001],tmax,maxx,n,a,b,c,v;
bool cmp(const node &a,const node &b)
{
	return a.c<b.c;
}
main()
{
	ifstream cin("BOXES.INP");
	ofstream cout("BOXES.OUT");
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>D[i].a>>D[i].b>>D[i].c>>D[i].v;
	}
	sort(D+1,D+1+n,cmp);
	for (int i=1;i<=n;i++)
	{
		F[D[i].a][D[i].b]=max(F[D[i].a][D[i].b],D[i].v);
		for (int j=i-1;j>0;j--)
		if (D[i].a>D[j].a && D[i].b>D[j].b && D[i].c>D[j].c)
		{
			F[D[i].a][D[i].b]=max(F[D[i].a][D[i].b],F[D[j].a][D[j].b]+D[i].v);
		}
		maxx=max(maxx,F[D[i].a][D[i].b]);
	}
	cout<<maxx;
/*	for (int i=1;i<=n;i++)
	for (int j=1;j<=n;j++)
	cout<<F[i][j]<<" "; */
}
