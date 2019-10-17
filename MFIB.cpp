#include<bits/stdc++.h>
#include<fstream>
#define MOD 1000000007
using namespace std;
long N,M;
long long A[2000009],k;
main()
{
	ifstream fin("MFIB.INP");
	ofstream fout("MFIB.OUT");
	fin>>N>>M;
//	cout<<N<<M;
	if (N<=M) fout<<1;
	else
	{
		for (long i=1;i<=M;i++) A[i]=1;
		A[M+1]=M;
		for (long i=M+2;i<=N;i++)
		{
		//	if (2*A[i-1]<A[i-M-1]) A[i]=(2*A[i-1]-A[i-M-1]+MOD)%MOD;
		//	else
			A[i]=(2*A[i-1]-A[i-M-1])%MOD;
		}
	//	for (int i=1;i<=N;i++)
		//cout<<A[i]<<" ";
		if (A[N]<=0) A[N]+=MOD;
		fout<<A[N]%MOD;
	}
}
