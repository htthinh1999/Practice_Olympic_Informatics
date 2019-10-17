#include<bits/stdc++.h>

using namespace std;

int main()
{
	/*
		Ta co: Nua duong cheo = a.can(2)/2
		<=> a.can(2)/2 = r.can(2) + r + (r.can(3) - r) + r
		<=> r = a*can(2) / (2 * (can(3) + can(2) + 1))
	*/
	
	ifstream cin("EIGHTCIRCLES.INP");
	ofstream cout("EIGHTCIRCLES.OUT");

	double x;
	cin>>x;
	
	x=sqrt(x);
	cout<<fixed<<setprecision(4)<<x*sqrt(2)/2/(sqrt(3)+sqrt(2)+1);
	return 0;
}
