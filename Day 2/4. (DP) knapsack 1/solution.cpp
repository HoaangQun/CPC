#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,S;
	cin>>n>>S;
	vector<long long> w(n+1,0),v(n+1,0),dp(S+2,0);
	for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
	for(int i=1;i<=n;i++)
		for(int j=S;j>=w[i];j--)
			dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
	cout<<dp[S];
	return 0;
}
