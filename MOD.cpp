#include <iostream>
using namespace std;
int main()
{
//	freopen("MOD.INP","r",stdin);
//	freopen("MOD.OUT","w",stdout);

    string n;
    cin>>n;
    n="00000"+n;
    for(int i=n.size()-3;i<n.size();++i)
        cout<<n[i];
    
    return 0;
}

