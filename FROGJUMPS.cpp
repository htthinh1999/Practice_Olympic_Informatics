#include<bits/stdc++.h>
#define chia 1000000007
using namespace std;
long n,i,j,a[1000001],f[1000001]={0};
long  s,kq=0;
main()
{
	ifstream fs("FROGJUMPS.INP");
	ofstream fo("FROGJUMPS.OUT");
	fs>>n;
	for(i=1;i<=n;i++)fs>>a[i];
	for(i=2;i<=n;i++)
	  {
	  	for(j=i-1;j>=1;j--)if(a[j]==a[i]){break;}
	  	if(a[i]==a[j])f[i]=min(f[i-1]+1,f[j]+1) ;else f[i]=f[i-1]+1;
	  }
	  fo<<f[n];
	fs.close();
	fo.close();
	
}
