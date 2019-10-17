#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string checkS(int n, string &s, int a[27]){
	for(int i=0; i<s.length(); i++){
		if(s[i]=='?'){
			for(int j=0; j<26; j++){
				if(a[j]>0){
					a[j]--;
					s[i]=(char)('a'+j);
					break;
				}
			}
			if(s[i]=='?'){
				return "-1";
			}
		}
	}
	return s;
}

int main(){
	
	ifstream fin("LEXSTR.INP");
	ofstream fout("LEXSTR.OUT");
	int n;
	string s, result;
	int a[27];
	fin>>n>>s;
	
	for(int i=0; i<26; i++)
		fin>>a[i];
	
	for(int i=0; i<s.length(); i++){
		a[(int)s[i]-'a']--;
		if(a[(int)s[i]-'a']<0){
			fout<<"-1"<<endl;
			return 0;
		}
	}
	
	result = checkS(n, s, a);
	fout<<result<<endl;
	
	return 0;
}
