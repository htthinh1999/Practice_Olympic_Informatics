#include<bits/stdc++.h>
using namespace std;

long long countItems(long a[], long b[], int n, int m, int l, int r, long t){
	long long rs=INFINITY, s1=0, s2=0;
	
	int mid=(l+r)/2;
	for(int j=0; j<m; j++)
		s2+=mid/b[j];
	for(int j=0; j<n; j++)
		s1+=(t-mid)/a[j];
	
	rs=min(s1, s2);
//	cout<<mid<<" "<<rs<<endl;
	if(l==r||s1==s2)	return rs;
	if(s1>s2)	return max(rs, countItems(a, b, n, m, mid+1, r, t));
	if(s1<s2)	return max(rs, countItems(a, b, n, m, l, mid, t));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("POTTERY.INP");
	ofstream cout("POTTERY.OUT");
	
	long t;
	int n;
	cin>>t>>n;
	long a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int m;
	cin>>m;
	long b[m];
	for(int i=0; i<m; i++)
		cin>>b[i];
	
	cout<<countItems(a, b, n, m, 1, t, t);
	
    return 0;
}
