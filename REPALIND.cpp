#include <bits/stdc++.h>
using namespace std;

bool pali(string s){
	for(int i=0; i<=s.length()/2; i++){
		if(s[i]!=s[s.length()-i-1])
			return 0;
	}
	return 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ifstream cin("REPALIND.INP");
	ofstream cout("REPALIND.OUT");
	
	int t;
	cin>>t;
	
	while(t--){
	
		string s;
		cin>>s;
		long long k;
		cin>>k;
		if(pali(s)==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
			
	}
	return 0;
}
