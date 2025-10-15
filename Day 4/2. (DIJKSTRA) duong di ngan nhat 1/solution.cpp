#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	typedef long long ll;
	
	#define pai pair<int,int>
	#define pal pair<ll,int>
	#define vt vector
	
	vt<vt<pai>> g(n+1);
	vt<ll> d(n+1,1e18);
	bitset<200001> vst;
	d[1] = 0;
	while(m--) {
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back({v,w});
	}
	priority_queue<pal,vector<pal>,greater<pal>> q;
	q.push({d[1],1});
	while(!q.empty()) {
		int u = q.top().second;
		q.pop();
		if(vst[u]) continue;
		vst[u] = 1;
		for(auto [v,w]:g[u]) if(d[u]+1LL*w<d[v]) {
			d[v] = d[u]+1LL*w;
			q.push({d[v],v});
		}
	}
	for(int i=1;i<=n;i++) cout<<d[i]<<' ';
	return 0;
}
