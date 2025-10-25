#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	typedef long long ll;
	typedef vector<ll> vt;

	const ll M = 2e9+11;
	const ll base = (1<<12);

	string s,t;
	cin>>s;
	int n = s.size();
	t = s+' ';
	s = ' '+s;
	reverse(t.rbegin(),t.rend());

	vt p(n+1,1),hs(n+1,0),ht(n+1,0);
	for(int i=1;i<=n;i++) {
		p[i] = (p[i-1]*base)%M;
		hs[i] = (hs[i-1]*base+s[i]-'a'+14)%M;
		ht[i] = (ht[i-1]*base+t[i]-'a'+14)%M;
	}
	
	auto is_pal = [&](const int l,const int r) -> bool {
		if(l == r) return 1;
		ll hashs = ((hs[r]-hs[l-1]*p[r-l+1])%M+M)%M;
		ll hasht = ((ht[n-l+1]-ht[n-r]*p[r-l+1])%M+M)%M;
		return hashs == hasht;
	};
	
	int q; cin>>q;
	while(q--) {
		int l,r;
		cin>>l>>r;
		if(is_pal(l,r)) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}