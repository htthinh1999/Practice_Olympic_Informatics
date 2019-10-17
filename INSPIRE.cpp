#include<bits/stdc++.h>
using namespace std;

int position(char c){
	if('a'<=c&&c<='z')
		return (int)(c-'a');
	if('A'<=c&&c<='Z')
		return (int)(c-'A');
	if(c==' ')
		return 26;
	return 27;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("INSPIRE.INP");
	ofstream cout("INSPIRE.OUT");
	double pi = 4.0*atan(1.0);
	int n;
	cin>>n;
	string s;
//	string s="WINNERS DON’T WAIT FOR CHANCES THEY TAKE THEM";
	getline(cin, s);
	
	while(n--){
		
		getline(cin, s);
		
		int rs=0;
		for(int i=1; i<s.length(); i++){
			rs+=min(abs(position(s[i])-position(s[i-1])), 28-abs(position(s[i])-position(s[i-1])));
	//		cout<<rs<<endl;
		}
		
		cout<<fixed<<setprecision(4)<<(double)rs/28*60*pi/15+s.length()<<endl;
	}
	
	return 0;
}
