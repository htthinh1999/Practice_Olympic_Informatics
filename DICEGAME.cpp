#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("DICEGAME.INP");
	ofstream cout("DICEGAME.OUT");
	
	pair<int, int> t, s;
	cin>>t.fi>>t.fi>>t.se>>t.se;
	cin>>s.fi>>s.fi>>s.se>>s.se;
	
	if(t.fi==t.se)	t.se--;
	if(s.fi==s.se)	s.se--;
	
	int rsT=t.fi+t.se;
	int rsS=s.fi+s.se;
	
	if(rsT>rsS)	cout<<1;
	if(rsT<rsS)	cout<<2;
	if(rsT==rsS)cout<<3;
	
	return 0;
}
