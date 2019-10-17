#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("ARCHERY.INP");
	ofstream cout("ARCHERY.OUT");
	
	int n;
	cin>>n;
	
	pair<int, int> p[n];
	for(int i=0; i<n; i++){
		cin>>p[i].f>>p[i].s;
		if(abs(p[i].f)>1000||abs(p[i].s)>1000){
			cout<<0;
			return 0;
		}
	}
	
	double maxx=-INFINITY;
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++){
			maxx=max(maxx, sqrt(pow((p[i].f-p[j].f), 2)+pow((p[i].s-p[j].s),2)));
		}
	
	cout<<fixed<<setprecision(4)<<maxx;
	return 0;
}
