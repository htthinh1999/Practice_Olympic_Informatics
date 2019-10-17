#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long a, b;
	long long count=0;
	cin>>a>>b;
	while(a<=b){
		a*=3;
		b*=2;
		count++;
	}
	cout<<count;
	
	return 0;
}
