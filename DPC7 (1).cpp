#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ifstream cin("DPC7.INP");
	ofstream cout("DPC7.OUT");
	
	int n, x;
	cin>>n>>x;
	
	long a[n];
	
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	// Tien xu ly
	// Chon ra day con lien tiep
	int ans = a[0], ans_l = 0, ans_r = 0;
	int sum = 0, min_sum = 0, min_pos = -1;
		
	if(x>0){
		for (int i=0; i<n; i++){
		    sum+=a[i];
		    int cur=sum-min_sum;
		    if (cur>ans) {
		        ans=cur;
		        ans_l=min_pos+1;
		        ans_r=i;
		    }
		    if (sum<min_sum) {
		        min_sum=sum;
		        min_pos=i;
		    }
		}
	}else{
		for (int i=0; i<n; i++){
		    sum+=a[i];
		    int cur=sum-min_sum;
		    if (cur<ans) {
		        ans=cur;
		        ans_l=min_pos+1;
		        ans_r=i;
		    }
		    if (sum>min_sum) {
		        min_sum=sum;
		        min_pos=i;
		    }
		}
	}
//	cout<<ans<<" "<<ans_l<<" "<<ans_r;
	
	
	// Nhan x
	for(int i=ans_l; i<=ans_r; i++)
		a[i]*=x;
	
	// Xu ly ket qua
	long long rs=a[0];
	long long f[n];
	f[0]=a[0];
	for(int i=1; i<n; i++){
		f[i]=max(0LL, f[i-1]+a[i]);
		rs=max(rs, f[i]);
	}
	
	cout<<rs;
	
	return 0;
}
