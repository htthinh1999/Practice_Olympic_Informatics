#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("MOVE.INP");
	ofstream cout("MOVE.OUT");

	long n, m, x1, y1, x2, y2;
	cin>>n>>m>>x1>>y1>>x2>>y2;
	
	if(x1>n||y1>m||x2>n||y2>m)	cout<<-1;
	else{
		if(abs(x1-x2)%2==0&&abs(y1-y2)%2==0)	cout<<abs(x1-x2)/2+abs(y1-y2)/2;
		else	cout<<-1;
	}
	
    return 0;
}
