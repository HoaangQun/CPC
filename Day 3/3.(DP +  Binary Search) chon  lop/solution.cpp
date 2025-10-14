#include <bits/stdc++.h>
using namespace std;

struct cls {
	long long l,r,w;
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<cls> a(n+1);
	vector<long long> dp(n+1,0),tr(n+1,0);
	for(int i=1;i<=n;i++) cin>>a[i].l>>a[i].r>>a[i].w;
	sort(a.begin()+1,a.end(),[](const cls& x,const cls& y){
		return x.r<y.r;
	});
	for(int i=1;i<=n;i++) tr[i] = a[i].r;
	dp[1] = a[1].w;
	for(int i=2;i<=n;i++) {
		dp[i] = max(dp[i-1],dp[upper_bound(tr.begin(),tr.end(),a[i].l-1)-1-tr.begin()]+a[i].w);
	}
	cout<<dp[n];
	return 0;
}
