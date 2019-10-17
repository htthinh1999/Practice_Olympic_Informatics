#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("PRODUCT.INP");
	ofstream cout("PRODUCT.OUT");
	
	int a, b;
	cin>>a>>b;
	if((a>0&&b>0)||(a<0&&b<0)){
		cout<<1;
		return 0;
	}
	if(a==0||b==0){
		cout<<0;
		return 0;
	}
	cout<<-1;
	return 0;
}
