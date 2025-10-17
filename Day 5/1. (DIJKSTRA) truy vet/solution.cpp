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
	cin>>n>>m;
	
	vector<vp> g(n+1);
	vector<ll> d(n+1,2e18);
	vector<int> pre(n+1);

	while(m--) {
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}

	priority_queue<pal,vector<pal>,greater<pal>> q;
	d[1] = 0;
	q.push({0,1});
	while(!q.empty()) {
		int u = q.top().second;
		ll du = q.top().first;
		q.pop();
		
		if(du!=d[u]) continue;

		for(const auto [v,w]:g[u]) if(d[v]>d[u]+1LL*w) {
			d[v] = d[u] + 1LL*w;
			pre[v] = u;
			q.push({d[v],v});
		}
	}
	
	if(d[n]==d[0]) {
		cout<<-1;
		return 0;
	}
	
	cout<<d[n]<<'\n';

	int pos = n;
	vector<int> res;
	while(pos) {
		res.push_back(pos);
		pos = pre[pos];
	}
	reverse(res.begin(),res.end());

	cout<<res.size()<<'\n';
	for(const int& x:res) cout<<x<<' ';
	return 0;
}
