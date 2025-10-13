#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	#define MAX 1000001
	#define MOD 1000000007
	vector<int> dp(MAX,0);
	bitset<MAX> broken;
	int n,k;
	cin>>n>>k;
	while(k--) {
		int b; cin>>b;
		broken[b] = 1;
	}
	dp[1] = 1;
	for(int i=2;i<=n;i++) {
		if(broken[i]) dp[i] = 0;
		else dp[i] = (dp[i-1]+dp[i-2])%MOD;
	}
	cout<<dp[n];
	return 0;
}
