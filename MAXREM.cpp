#include <bits/stdc++.h>
using namespace std;
map <int ,bool> mapp;
int main()
{
	freopen("MAXREM.INP","r",stdin);
	freopen("MAXREM.OUT","w",stdout);
   int n;
   int m1=0,m2=0;
    cin>>n; 
    for(int i=1;i<=n;++i) 
    {
    	int x;
    	cin>>x;
	    if(m1<x) {m2=max(m2,m1);m1=x;}
	    if(x<m1) m2=max(m2,x);
	}
	cout<<m2;
    return 0;
}

