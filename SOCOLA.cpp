#include<bits/stdc++.h>
#define chia 1000000007
using namespace std;
long n,i,j;
long  s,kq=0;
main()
{
	ifstream fi("SOCOLA.INP");
	ofstream fo("SOCOLA.OUT");
	fi>>n;
	s=n/3;
	for(i=0;i<=s;i++)
	 {
	 	kq+=(n-(i*3))/2;kq++;
	 }
	s=s%chia;
	fo<<kq;
	fi.close();
	fo.close();
	
}
