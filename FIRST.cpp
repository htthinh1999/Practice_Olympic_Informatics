#include<bits/stdc++.h>
using namespace std;

long long firstkdigits(long a, long b, long k) 
{
	long double product = b * log10(a);
	long double decimal_part = product - floor(product);
   
	decimal_part = pow(10, decimal_part);
	long long digits = pow(10, k - 1), i = 0;

	return decimal_part * digits; 
}

int main() 
{
	ifstream cin("FIRST.INP");
	ofstream cout("FIRST.OUT");
	
	long a, b, k;
	cin>>a>>b>>k;
	
//	long a=10, b=2018, k=4;
	
	cout<<firstkdigits(a, b, k); 
	return 0;
} 
