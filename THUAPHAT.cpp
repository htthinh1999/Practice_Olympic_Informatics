#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int pow_modulo(long long base, long long exponent, long long m) {
	if (exponent == 0) return 1;
	if (exponent == 1) return base;
	long long half = pow_modulo(base, exponent/2, m);
	if (exponent % 2 == 0) {
		return (half * half) % m;
	}else{
		return (((half * half) % m) * base) % m;
	}
}

int dao_modulo(int n, int m) {
	return pow_modulo(n, m-2, m);
}

int C(int n, int k, int m) {
	int a = 1, b = 1, c = 1;
	for (int i=2; i <= n; i++) {
		a = ((long long)a * i) % m;
	}
	for (int i=2; i <= n-k; i++) {
		b = ((long long)b * i) % m;
	}
	for (int i=2; i <= k; i++) {
		c = ((long long)c * i) % m;
  	}
	b = ((long long) b * c) % m;
	return ((long long) a * dao_modulo(b, m)) % m;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("THUAPHAT.INP");
	ofstream cout("THUAPHAT.OUT");
	
	int n=0, k=0;
	
	while(n!=-1&&k!=-1){
		n=-1, k=-1;
		cin>>n>>k;
		if(n==-1&&k==-1)	break;
		cout<<C(n-1, k-1, 1000000007)<<endl;
	}

	return 0;
}
