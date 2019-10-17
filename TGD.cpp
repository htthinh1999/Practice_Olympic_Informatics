#include<bits/stdc++.h>
using namespace std;

unsigned long long C(int n){
	return n*(n-1)*(n-2)/6;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("TGD.INP");
	ofstream cout("TGD.OUT");
	
	long n;
	cin>>n;
	vector<int> v;
	
	for(long i=0; i<n; i++){
		long long x;
		cin>>x;
		if(x>0)	v.push_back(x);
	}
	
	sort(v.begin(), v.end());
	long long rs=0;
	int i=1, temp=1;
	while(i<v.size()){
		if(v[i]==v[i-1])	temp++;
		else{
			rs+=C(temp);
			temp=1;
		}
		i++;
	}
	
	cout<<rs;
	
	return 0;
}
