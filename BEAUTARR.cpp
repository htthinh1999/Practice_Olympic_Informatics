#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("BEAUTARR.INP");
	ofstream cout("BEAUTARR.OUT");
	
	long long n;
	cin>>n;
	long long a[n];
	for(long i=0; i<n; i++)
		cin>>a[i];
	
	map<long long, int> count;
	unsigned long long dem=0;
	for(long long i=0; i<n; i++){
		count.clear();
		for(long long j=i; j<n; j++){
			count[a[j]]++;
			if(count[a[j]]<=2)	dem++;
			else	break;
		}
	}
	
	cout<<dem;
	
    return 0;
}
