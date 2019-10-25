#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ifstream cin("PANDA.INP");
	ofstream cout("PANDA.OUT");
	
	long a;
	cin>>a;
	if(a>0)	cout<<'P';
	else	cout<<'A';
	
	return 0;
}
