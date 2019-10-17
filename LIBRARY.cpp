#include <bits/stdc++.h>
using namespace std;

int n, m, a[100001], minn;
vector<int> graph[100001];
bool visited[100001];

void dfs(int u) {
    visited[u]=1;
    minn=min(minn, a[u]);
    for(int i=0; i<graph[u].size(); i++)
        if (!visited[graph[u][i]])
            dfs(graph[u][i]);
}

int main() {
	
	ifstream cin("LIBRARY.INP");
	ofstream cout("LIBRARY.OUT");
	
    cin>>n>>m;
    for(int u=0; u<n; u++)
        cin>>a[u];
    for(int i=0; i<m; i++) {
        int u, v;
        cin>>u>>v;
        graph[u-1].push_back(v-1);
		graph[v-1].push_back(u-1);
    }
    long long rs=0;
    for(int u=0; u<n; u++) {
        if (!visited[u]) {
            visited[u]=1;
            minn=INFINITY;
            dfs(u);
            rs+=minn;
        }
    }
    cout<<rs;
    return 0;
}
