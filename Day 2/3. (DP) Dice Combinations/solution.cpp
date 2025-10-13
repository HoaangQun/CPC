#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	#define MAX 1000001
	#define MOD 1000000007
	vector<int> dp(MAX,0);
	dp[0] = 1;
	for(int i=1;i<MAX;i++)
		for(int j=1;j<=6;j++) if(j<=i)
			dp[i] = (dp[i]+dp[i-j])%MOD;
	int n;
	cin>>n;
	cout<<dp[n];
	return 0;
}
