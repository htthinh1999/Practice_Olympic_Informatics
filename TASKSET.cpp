#include<bits/stdc++.h>
#define MAX 1000000000000000000
using namespace std;

map<unsigned long long, bool> check;

void sinh(){
	long long i=0;
	unsigned long long num=(unsigned long long) pow(2, i);
	do{
		check[num]=1;
		check[num*3]=1;
		i++;
		num=(unsigned long long) pow(2, i);
	}while(num<=MAX);
}

long long distance(long long n){
	if(check[n]==1)	return 0;
	long long top=INFINITY, under=-INFINITY;
	for(map<unsigned long long, bool>::iterator it=check.begin(); it!=check.end(); it++){
		if(it->first>n){
			top=it->first;
			it--;
			it--;
			under=(it)->first;
//			cout<<under<<" "<<top<<endl;
			break;
		}
//		cout<<it->first<<endl;
	}
//	cout<<n-under<<" "<<top-n<<endl;
	return max(0LL, min(n-under, top-n));
}

int main(){
	
//	ifstream cin(".INP");
//	ofstream cout(".OUT");
	
	long long n=597949;
//	cin>>n;
	sinh();
	cout<<distance(n);
	
	return 0;
}
