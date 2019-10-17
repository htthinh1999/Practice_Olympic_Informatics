#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("FUNCTION.INP");
	ofstream cout("FUNCTION.OUT");
	
	long long a, b, c, x;
	cin>>a>>b>>c>>x;
	cout<<a*x*x+b*x+c;
	
    return 0;
}
