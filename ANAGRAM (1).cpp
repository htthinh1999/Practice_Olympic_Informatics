#include<bits/stdc++.h>
#include<fstream>
using namespace std;
unsigned long long B1[4001],B2[4001],A[26]={3,1001,4004,16016,64064,256256,1025024,4100096,16400384,65601536,262406144,1049624576,4198498304,16793993216,67175972864,268703891456,1074815565824,4299262263296,17197049053184,68788196212736,275152784850944,1100611139403776,4402444557615104,17609778230460416,70439112921841664,281756451687366656,
},dem=0;
char s1[4001],s2[4001];
int sint(char a)
{
	return (int)(a-97);
}
main()
{
//	ifstream cin("ANAGRAM.INP");
//	ofstream cout("ANAGRAM.OUT");
	cin>>s1>>s2;
	int l1=strlen(s1),l2=strlen(s2);
//	cout<<l1<<" "<<s1;
	B1[1]=A[sint(s1[0])];
//	cout<<A[sint('z')];
//	cout<<B1[0]<<" ";
	for (int i=2;i<=l1;i++)
	{
		B1[i]=B1[i-1]+A[sint(s1[i-1])];
//		cout<<B1[i]<<" "<<sint(s1[i-1])<<" "<<A[sint(s1[i-1])]<<endl;
	}
//	cout<<endl;
//	cout<<B2[0]<<" ";
	B2[1]=A[sint(s2[0])];
	for (int i=2;i<=l2;i++)
	{
		B2[i]=B2[i-1]+A[sint(s2[i-1])];
	//	cout<<B2[i]<<" "<<sint(s2[i-1])<<" "<<A[sint(s2[i-1])]<<endl;;
	}
	int i=1,j=1;
	while (i<=(l1-dem) && j<=(l2-dem))
	{
		if ((B1[i+dem]-B1[i-1])!=(B2[j+dem]-B2[j-1]))
		{
			j++;
			if (j>(l2-dem) && i<=(l1-dem))
			{
				i++;
				j=1;
			}
		}
		else
		{
		//	cout<<i<<" "<<j<<" "<<dem<<endl;
			dem++;
			i=1;
			j=1;
		}
		
	}
//	cout<<B1[5]-B1[1]<<" "<<B2[4]-B2[0];
	cout<<dem;
	
}
