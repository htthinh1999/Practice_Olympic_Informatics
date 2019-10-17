#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("EVENUP.INP");
	ofstream cout("EVENUP.OUT");
	
	int n;
	cin>>n;
	
	int* a = new int[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	int rs=n;
	bool checked=true;
	
	while(rs!=0&&checked){
		checked=false;
		for(int i=0; i<n-1; i++)
			if((a[i]+a[i+1])%2==0){
				rs-=2;
				a[i]=0;
				a[i+1]=0;
				i+=2;
				checked=true;
			}
	
		if(!checked)	break;
		
		vector<int> temp;
		for(int i=0; i<n; i++){
			if(a[i]!=0) temp.push_back(a[i]);
		}
		
		n = temp.size();
		a = new int[n];
		for(int i=0; i<n; i++){
			a[i]=temp[i];
		}
	}
	
	cout<<rs;
	
	return 0;
}
