#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("CLTHREE.INP");
	ofstream cout("CLTHREE.OUT");
	
	int h, m;
	cin>>h>>m;
//	cout<<(double)50/60*6;
	double rs=-h*30-(double)m/60*30+m*6;
//	cout<<rs<<endl;
	if(rs<0)	rs=-rs;
	if(rs>180)	cout<<fixed<<setprecision(1)<<360-rs;
	else cout<<fixed<<setprecision(1)<<rs;
	return 0;
}
