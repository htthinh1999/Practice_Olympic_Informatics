#include<bits/stdc++.h>
#include<fstream>
#include<vector>
#include<string>
#define ll unsigned long long
using namespace std;
ll a,b,aa,bb;
//ll mu[22]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000,100000000000,1000000000000,10000000000000,100000000000000};
//ll SO[22]={0,45,900,13500,180000,2250000,27000000,315000000,3600000000,40500000000,450000000000,4950000000000,54000000000000,585000000000000,6300000000000000};
string sa,sb;
ll mu[22],SO[22];
//int k,A[20],B[20],xa,xb,TA=0,TB=0;
int sint(char a)
{
	return (int)(a-48);
}
ll so(string a)
{
	ll ans=0;
	int la=a.length();
	for (int i=0;i<la;i++)
	{
		ans=ans*10;
		ans=ans+sint(a[i]);
	}
	return ans;
}
ll xuly(string a)
{
	int A[20];
	ll TA=0;
	int la=a.length();
	for (int i=0;i<la;i++)
	A[la-i]=sint(a[i]);
	ll aa=so(a);
	for (int i=la;i>1;i--)
	{	if (A[i]!=0)
		{
		ll wa=aa%mu[i-1]+1;
		int WW=A[i]*(A[i]-1)/2;
		TA=TA+A[i]*SO[i-1]+A[i]*wa+WW*mu[i-1];
	//	cout<<wa<<" "<<mu[i-1]<<" "<<A[i]<<" "<<SO[i-1]<<" "<<WW<<" "<<TA<<endl;
		}
	}
	TA+=A[1]*(A[1]+1)/2;
	return TA;
}
void khoitao()
{
	mu[0]=1;
	for (int i=1;i<=17;i++)
	{
		mu[i]=mu[i-1]*10;
	}
	for (int i=1;i<=17;i++)
	{
		SO[i]=mu[i-1]*i*45;
	}
}
main()
{
	ifstream cin ("DIGITSUM.INP");
	ofstream cout ("DIGITSUM.OUT");
	khoitao();
	cin>>sa>>sb;
	//a=so(sa);
//	b=so(b);
//	for (int i=1;i<=15;i++)
//	cout<<mu[i]<<" "<<SO[i]<<endl;
	ll l1=xuly(sa);
	for (int i=0;i<sa.length();i++)
	l1-=sint(sa[i]);
	cout<<xuly(sb)-l1;
}
