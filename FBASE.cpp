#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int k;
	cin>>k;
	string a, b;
	cin>>a>>b;
	
	if(a.length()<b.length()){
		string temp=a;
		a=b;
		b=temp;
	}
	
	int i=0, l=b.length();
	while(i<a.length()-l){
		b="0"+b;
		i++;
	}
//	cout<<a<<"\n"<<b<<"\n";	
	int temp=0;
	string rs="";
	for(i=a.length()-1; i>=0; i--){
		int num1=(int)a[i]-'0';
		int num2=(int)b[i]-'0';
		
		int sum=num1+num2+temp;
		temp=0;
		if(sum>=k){
			temp++;
			rs=string(1, (char)(sum-k)+'0')+rs;
		}else{
			rs=string(1, (char)(sum)+'0')+rs;
		}
		
//		cout<<rs<<"\n";
	}
	if(temp>0)	rs=string(1, (char)temp+'0')+rs;
	cout<<rs;

	return 0;
}
