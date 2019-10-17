#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("TANCUNG.INP");
	ofstream cout("TANCUNG.OUT");
	
	string a, b;
	cin>>a>>b;
	
	if(b=="0"){
		cout<<1;
		return 0;
	}
	
	if(b.length()==1){
		cout<<(unsigned long long)pow(stoi(a), stoi(b))%10;
		return 0;
	}
	
	int numA=(int)a[a.length()-1]-'0';
	int numB=stoi(string(1, b[b.length()-2])+string(1, b[b.length()-1]));
	
//	cout<<numA<<" "<<numB<<endl;

	if(numA==0||numA==1||numA==5||numA==6){
		cout<<numA;
		return 0;
	}
	if(numA==3||numA==7||numA==9){
		if(numB%4==0)
			cout<<1;
		else
			cout<<(long long)pow(numA, numB%4)%10;
		return 0;
	}
	if(numA==2||numA==4||numA==8){
		if(numB%4==0)
			cout<<6;
		else
			cout<<6LL*(long long)pow(numA, numB%4)%10;
	}
	
	return 0;
}

