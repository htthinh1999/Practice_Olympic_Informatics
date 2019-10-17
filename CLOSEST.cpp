#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("CLOSEST.INP");
	ofstream cout("CLOSEST.OUT");
	
	int n, m;
	cin>>n>>m;
	long c1, c2;
	cin>>c1>>c2;
	
	long a[n], b[m];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	for(int i=0; i<m; i++)
		cin>>b[i];
	
	sort(a, a+n);
	sort(b, b+m);
	
	long long min = INFINITY;
	int count=0;
	int i=0, j=0;
	
	while(i<n && j<m){
		
		if(abs(a[i]-b[j]) < min){
			min = abs(a[i]-b[j]);
			count = 0;
		}
		
		if(abs(a[i]-b[j]) == min)
			count++;
		
		if(a[i]<b[j])
			i++;
		else
			j++;
	}
	
	cout<<min+abs(c1-c2)<<" "<<count;
	
	return 0;
}
