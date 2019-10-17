#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("VMACHINE.INP");
	ofstream cout("VMACHINE.OUT");
	
	int k;
	cin>>k;
	while(k--){
		long long n;
		cin>>n;
		
		long long i=1;
		long rs=0;
		vector<long long> v;
		while(n>0){
			rs++;
			v.push_back(i);
			n-=i;
			i*=2;
		}
		cout<<rs<<endl;
		for(long i=0; i<v.size(); i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}
    
