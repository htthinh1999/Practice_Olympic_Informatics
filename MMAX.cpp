#include <bits/stdc++.h>
using namespace std;
long long a[10001];
int main()
{
//	freopen("MMAX.INP","r",stdin);
//	freopen("MMAX.OUT","w",stdout);
   int n;
    cin>>n; 
    for(int i=1;i<=n;++i) cin>>a[i];
    sort(a+1,a+n+1);
    long long x,y,z,t;
    x=a[n]*a[n-1]*a[n-2];
	y=a[n]*a[n-1];
	z=a[1]*a[2]*a[n];
	t=a[1]*a[2];
    cout<<max(max(max(x,y),z),t);
    return 0;
}

