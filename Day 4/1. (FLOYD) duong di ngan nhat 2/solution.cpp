#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,q;
	cin>>n>>m>>q;
	typedef long long ll;
	vector<vector<ll>> d(n+1,vector<ll>(n+1,2e18));
	while(m--) {
		int a,b;
		ll c;
		cin>>a>>b>>c;
		d[a][b] = d[b][a] = min(d[b][a],c);
	}
	for(int i=1;i<=n;i++) d[i][i] = 0;
	for(int k=1;k<=n;k++)
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(d[i][k]<d[0][0]&&d[k][j]<d[0][0])
		d[i][j] = d[j][i] = min(d[i][j],d[i][k]+d[k][j]);
	while(q--) {
		int u,v;
		cin>>u>>v;
		if(d[u][v]!=d[0][0]) cout<<d[u][v]<<'\n';
		else cout<<-1<<'\n';
	}
	return 0;
}
