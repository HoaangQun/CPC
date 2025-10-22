#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	typedef long long ll;
	typedef unsigned long long ull;
	typedef unordered_map<ll,int> umap;

	const ll MOD = 1e9+9,base = 44;

	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	s = ' '+s;

	vector<ull> p(n+1,1),h(n+1,0);
	for(int i=1;i<=n;i++) {
		p[i] = (p[i-1]*base)%MOD;
		h[i] = ((h[i-1]*base+s[i]-'a'+14)%MOD+MOD)%MOD;
	}
	auto gethash = [&](const int l,const int r) -> ll {
		return ((h[r]-h[l-1]*p[r-l+1])%MOD+MOD)%MOD;
	};
	auto check = [&](const int L) -> bool {
		umap cnt;
		for(int l=1;l+L-1<=n;l++) {
			ull cur = gethash(l,l+L-1);
			cnt[cur]++;
			if(cnt[cur]>=k) return 1;
		}
		return 0;
	};
	if(check(n)) {
		cout<<n;
		return 0;
	}
	int low = 0,high = n,ans = 0;
	while(low<=high) {
		int mid = low+(high-low)/2;
		if(check(mid)) {
			ans = mid;
			low = ++mid;
		} else high = --mid;
	}
	
	cout<<ans;

	return 0;
}
