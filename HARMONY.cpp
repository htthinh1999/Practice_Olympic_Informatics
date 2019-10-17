#include<bits/stdc++.h>
using namespace std;

string process(int n, int a[]){
	if(n==2){
		if(abs(a[0]-a[1])==1)
			return "Yes\n";
		else
			return "No\n";
	}else{
		int i=0;
		int count=1;
		int rs=0;
		bool checked=0;
		while(i<n){
			if(abs(a[i]-a[i+1])==1)
				count++;
			else{
				rs=max(rs, count);
				if(rs>n/2){
					checked=1;
					return "Yes\n";
				}
				if(i==n/2+1){
					checked=1;
					return "No\n";
				}
				count=1;
			}
			i++;
//			cout<<rs<<endl;
		}
		if(!checked){
			if(rs>n/2)
				return "Yes\n";
			else
				return "No\n";
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("HARMONY.INP");
	ofstream cout("HARMONY.OUT");
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		a[n]=INFINITY;
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		cout<<process(n, a);
	}
	
    return 0;
}
