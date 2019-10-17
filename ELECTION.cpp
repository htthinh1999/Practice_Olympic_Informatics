#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream fin("ELECTION.INP");
	ofstream fout("ELECTION.OUT");
	
	int t;
	fin>>t;
	for(int m=0; m<t; m++){
		long long n, k, max, s=0, count=0;
		fin>>n>>k;
		
		long long a[n];
		for(long long i=0; i<n; i++){
			fin>>a[i];
			if(i==0 || max<a[i])	max=a[i];
		}
		for(long long i=0; i<n; i++)
			if(a[i]!=max){
				count++;
				s+=a[i];
			}
		if(k-(count*max-s) < 0)	fout<<"NO"<<endl;
		else
			if((k-(count*max-s))%n==0)	fout<<"YES"<<endl;
			else fout<<"NO"<<endl;
	}
	return 0;
}
