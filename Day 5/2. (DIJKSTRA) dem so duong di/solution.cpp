#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	typedef long long ll;
	typedef pair<int,int> pai;
	typedef pair<ll,int> pal;
	typedef vector<pai> vp;
	
	int n,m;
	const unsigned int MOD = 1e9+7;
	cin>>n>>m;
	
	vector<vp> g(n+1);
	vector<ll> d(n+1,2e18);
	vector<int> ways(n+1);

	while(m--) {
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}

	priority_queue<pal,vector<pal>,greater<pal>> q;
	d[1] = 0;
	ways[1] = 1;
	q.push({0,1});
	while(!q.empty()) {
		int u = q.top().second;
		ll du = q.top().first;
		q.pop();
		
		if(du!=d[u]) continue;

		for(const auto [v,w]:g[u]) if(d[v]>d[u]+1LL*w) {
			d[v] = d[u] + 1LL*w;
			ways[v] = ways[u];
			q.push({d[v],v});
		} else if(d[u]+1LL*w==d[v]) {
			ways[v] = (ways[v]+ways[u])%MOD;
		}
	}
	
	cout<<ways[n];

	return 0;
}
