#include<bits/stdc++.h>
using namespace std;

unsigned long long sumDigits(long long n, unsigned long long count[]){
	unsigned long long rs=0;
	int small=n%100;
	n/=100;
	int temp=1;
	rs+=n%10*count[temp++]+(n%10)*(small+1);
	n/=10;
	while(n){
		rs+=n%10*count[temp++]+n%10;
		n/=10;
	}
	for(int i=0; i<=small; i++)
		rs+=i%10+(i/10)%10;
	return rs;
}

int main(){
	
//	long long f[16];
//	f[0]=0;
//	f[1]=45;
//	for(int i=2; i<=15; i++){
//		f[i]=f[i-1]*10+45*pow(10, i-1);
//		cout<<f[i]<<"\n";
//	}

	/*
		count[0]=45 la tong cac chu so tu 1-99
		count[1]=900 la tong cac chu so tu 1-999
	*/
	unsigned long long count[16]={45, 900, 13500, 180000, 2250000, 27000000, 315000000, 3600000000, 40500000000, 450000000000, 4950000000000, 54000000000000, 585000000000000, 6300000000000000, 67500000000000000};
	
	
	ifstream cin("DIGITSUM.INP");
	ofstream cout("DIGITSUM.OUT");
	
	long long a, b;
	cin>>a>>b;

//	long long a=100, b=103;
	
	cout<<sumDigits(b, count)-sumDigits(a-1, count);
	
	return 0;
}
