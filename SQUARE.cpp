#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("SQUARE.INP");
	ofstream cout("SQUARE.OUT");
	
	int n;
	cin>>n;
	
	cout<<(long long) pow((long long)pow(2, n)+1, 2);
	
	
	return 0;
}
