#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;

vector<long> snt(MAX, 1);
void sang(){
	snt[0]=0;
	snt[1]=0;
	for(long i=2; i<=sqrt(MAX); i++){
		if(snt[i]==1){
			snt[i]=i;
			for(long j=i*i; j<=MAX; j+=i){
				snt[j]=i;
			}
		}
	}
}

long long mul(long x){
	if(x<=1)	return 1;
	long long rs=1;
	while(x>1){
		if(rs%snt[x]!=0)	rs*=snt[x];
		x/=snt[x];
	}
	return rs;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("SAMEPAIR.INP");
	ofstream cout("SAMEPAIR.OUT");
	
	sang();
	
	long l, r;
	cin>>l>>r;
//	long l=10, r=10000;
	long n=r-l+1;
	map<long long, int> count;
	for(long i=l; i<=r; i++){
		count[mul(i)]++;
	}
	
	long long rs=0;
	for(map<long long, int>::iterator it=count.begin(); it!=count.end(); it++){
		long long dem=it->second;
		if(dem>=2)
			rs+=dem*(dem-1)/2;
	}
	
	cout<<rs;
	
    return 0;
}
