#include<bits/stdc++.h>
using namespace std;

int femat(int a, long long b, long c){
	if(b==0)	return 1;
	if(b==1)	return a;
	long long half=femat(a, b/2, c);
	if(b%2==0)	return (half*half)%c;
	return ((half*half)*a)%c;
}

int main(){
	
	ifstream cin("COUNTING.INP");
	ofstream cout("COUNTING.OUT");
	
	long long n;
	cin>>n;
	cout<<femat(3, n-1, 1000000007);
	
	return 0;
}
