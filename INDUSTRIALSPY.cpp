#include<bits/stdc++.h>
#define N 10000000
using namespace std;

bool check[N+1];

void sang(){
	for(long i=0; i<=N; i++)
		check[i]=true;
	check[0]=false;
	check[1]=false;
	for(long i=2; i*i<=N; i++){
		if(check[i])
			for(long j=i*i; j<=N; j+=i)
				check[j]=false;
	}
}

bool isContain(int n, int elements[10]){
	int smallElemens[10];
	for(int i=0; i<10; i++)
		smallElemens[i]=0;
	while(n){
		smallElemens[n%10]++;
		n/=10;
	}
	for(int i=0; i<10; i++)
		if(smallElemens[i]>elements[i])
			return false;
	return true;
}

int main(){
	
	ifstream cin("INDUSTRIALSPY.INP");
	ofstream cout("INDUSTRIALSPY.OUT");
	
	sang();
	
	int t;
	string s;
	cin>>t;
	for(int k=0; k<t; k++){
		cin>>s;
		sort(s.rbegin(), s.rend());
		int n = stoi(s);
		int temp=n;
		
		int elements[10];
		for(int i=0; i<10; i++)
			elements[i]=0;
		while(temp){
			elements[temp%10]++;
			temp/=10;
		}
		
		int count=0;
		for(int i=2; i<=n; i++)
			if(check[i]&&isContain(i, elements))
				count++;
		
		cout<<count<<endl;
	}
	return 0;
}

