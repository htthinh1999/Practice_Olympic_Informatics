#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("ZIP.INP");
	ofstream cout("ZIP.OUT");
	
	string s;
	cin>>s;
	
	string rs="";
	vector<int> c(27, 0);
	for(int i=0; i<=s.length()/2; i++){
		c[(int)s[i]-'a']++;
//		cout<<c[(int)s[i]-'a']<<endl;
		if((c[(int)s[i]-'a']>=2)&&(s.length()%rs.length()==0)){
			string temp=rs;
			int l=s.length()/rs.length();
			for(int i=0; i<l-1; i++){
				temp+=rs;
				if(temp==s){
					cout<<l<<rs;
					return 0;
				}
			}
		}
		rs+=string(1, s[i]);
//		cout<<rs<<endl;
	}
	
	cout<<1<<s;
	
	return 0;
}
