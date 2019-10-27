#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ifstream cin("ALCOHOL.INP");
	ofstream cout("ALCOHOL.OUT");
	
	map<string, int> count;
	count["ABSINTH"]=1;
	count["TEQUILA"]=1;
	count["VODKA"]=1;
	count["WHISKEY"]=1;
	count["WINE"]=1;
	count["BEER"]=1;
	count["BRANDY"];
	count["CHAMPAGNE"]=1;
	count["GIN"]=1;
	count["RUM"]=1;
	count["SAKE"]=1;
	
	int n;
	cin>>n;
	
	int d=0;
	while(n--){
		string s;
		cin>>s;
		
//		cout<<stoi(s)<<endl;
		if((s.length()==2&&s[0]=='1'&&s[1]<'8')||(s.length()==1)&&(s[0]>='0'&&s[0]<='9'))
			d++;
		else	if(count.find(s)!=count.end())
					d++;
		
	}
	
	cout<<d;
	
	return 0;
}
