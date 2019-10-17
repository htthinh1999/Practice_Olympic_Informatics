#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("FLOWER.INP");
	ofstream cout("FLOWER.OUT");
	
	int n;
	cin>>n;
	
	vector<int> count(100000, 0);
	for(int i=0; i<n-1; i++){
		int x;
		cin>>x;
		count[x]++;
		cin>>x;
		count[i]++;
	}
	
	int rs=0;
	for(int i=0; i<100000; i++)
		if(count[i]>1) rs++;
	
	if(rs==1)	cout<<"Yes";
	else	cout<<"No";
	
	return 0;
}
