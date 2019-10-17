#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("DNA.INP");
	ofstream cout("DNA.OUT");
	
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		string s1;
		cin>>s1;
		int dem=0;
		if(s1.length()==s.length()){
			for(int j=0; j<s.length(); j++)
				if(s[j]!=s1[j])
					dem++;
			if(dem<=2)	cout<<i<<" ";	
		}
	}
	
	return 0;
}
