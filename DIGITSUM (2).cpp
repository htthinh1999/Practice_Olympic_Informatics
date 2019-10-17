#include<bits/stdc++.h>
using namespace std;
long f[]={0,1,3,6,10,15,21,28,36,45};
long long a,b;
long long demso(long long x)
 {
 	long long d = 0,so_a=0,n=x;
 	if(x<10) return f[x];
 	long long temp=0; 
 	while(x != 0)
 	  { 	  	
 	  	 	temp += x%10*(so_a+1)+pow(10,d)*f[x%10-1]+(x%10)*pow(10,d-1)*45*d;
 	  	 	d++;
			long long k=pow(10,d);so_a=n%k;//cout<<so_a<<endl;
 	  	 	x=x/10;
	   }
	return temp;
 }
main()
 {
 	ifstream cin ("DIGITSUM.INP");
 	ofstream cout ("DIGITSUM.OUT");
 	cin >> a >> b;
 	cout<<abs(demso(b)-demso(a-1));
 }
