#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pai;
typedef pair<ll,int> pal;

#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define MOD 1000000007
#define MAX 100005
#define pb push_back
#define fi first
#define se second

int n,m,c[MAX],mx[MAX],mn[MAX];
vector<pai> g[MAX];
ll d[MAX];
vector<int> edge;

void maximize(int& a,int b) {
	if(b>a) a=b;
}
void minimize(int& a,int b) {
	if(b<a) a=b;
}
void dijkstra() {
	memset(d,63,sizeof(d));
	memset(mn,63,sizeof(mn));
	d[1] = 0;
	c[1] = 1;
	mn[1] = 0;
	mx[1] = 0;
	priority_queue<pal,vector<pal>,greater<pal>> q;

	q.push({d[1],1});
	while(!q.empty()) {
		ll du = q.top().fi;
		int u = q.top().se;
		q.pop();
		if(du!=d[u]) continue;
		for(const auto& [v,w]:g[u]) if(d[u]+1LL*w<d[v]) {
			d[v] = d[u]+1LL*w;
			q.push({d[v],v});
		}
	}
	FOR(v,1,n) edge.pb(v);
	sort(edge.begin(),edge.end(),[&](const int x,const int y){
		return d[x]<d[y];
	});
	for(const int& u:edge) {
		for(const auto& [v,w]:g[u]) if(d[v]==d[u]+1LL*w) {
			c[v] = (c[v]+c[u])%MOD;
			maximize(mx[v],mx[u]+1);
			minimize(mn[v],mn[u]+1);
		}
	}
}
void solve() {
	dijkstra();
	cout<<d[n]<<' ';
	cout<<c[n]<<' ';
	cout<<mn[n]<<' ';
	cout<<mx[n]<<' ';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	while(m--) {
		int u,v,w;
		cin>>u>>v>>w;
		g[u].pb({v,w});
	}
	return solve(),0;
}
