#include<bits/stdc++.h>
using namespace std;
typedef pair <long ,long> ii;
ii f[100001],res[100001];
long tu,mau,n,k;
long gcd(long A, long B) {
    if (B == 0) return A;
    else return gcd(B, A % B);
}
main()
{
	ifstream cin("DIAMOND.INP");
	ofstream cout("DIAMOND.OUT");
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin >> n >> k;
	for (long i = 1 ; i<=n; i++)
		{
			cin >> f[i].first >> f[i].second;
			if(i<=k)tu += f[i].first , mau += f[i].second , res[i].first = f[i].first , res[i].second = f[i].second;	
		}
//	sort( f + 1 , f + n + 1 , cmp );	
//	cout << tu <<" "<< mau<<endl;
	for(long i = k + 1 ; i <= n ; i++)
		{
			double sosanh=(double)tu/mau;//cout<<sosanh<<endl;
			long vtri,tutam,mautam;
			for (long j = 1 ; j <= k ; j++)
			 {			 	
			 	long tu1 = tu + f[i].first - res[j].first;
			 	long mau1 = mau + f[i].second - res[j].second;	 	
			 	if( (double)tu1 / mau1 > sosanh ) sosanh = (double)tu1/mau1 , vtri = j , tutam = tu1 , mautam = mau1;					 
			 }
			if(sosanh > (double)tu/mau )
			 {
			 	swap( res[vtri].first , f[i].first );
			 	swap( res[vtri].second , f[i].second );
			 	tu = tutam;
			 	mau = mautam;
			 //	cout <<tu<<" "<<mau<<"kq"<<endl;
			 }
		}
		long k=gcd(tu,mau);
	cout << tu/k << " " << mau/k;
}
