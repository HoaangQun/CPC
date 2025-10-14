#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> vst;
vector<vector<vector<int>>> g;
int cnt[2];
void dfs(const int& x,const int& u) {
	vst[x][u] = cnt[x];
	for(const int& v:g[x][u]) if(!vst[x][v]) dfs(x,v);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,l;
	cin>>n>>m>>l;
	g.resize(2,vector<vector<int>>(n+1));
	vst.resize(2,vector<int>(n+1,0));
	for(int i=1;i<=m+l;i++) {
		int u,v;
		cin>>u>>v;
		g[i>m][u].push_back(v);
		g[i>m][v].push_back(u);
	}
	map<pair<int,int>,int> results;
	for(int x:{0,1}) for(int u=1;u<=n;u++) if(!vst[x][u]) {
		cnt[x]++;
		dfs(x,u);
	}
	for(int u=1;u<=n;u++) results[{vst[0][u],vst[1][u]}]++;
	for(int u=1;u<=n;u++) cout<<results[{vst[0][u],vst[1][u]}]<<' ';
	return 0;
}
