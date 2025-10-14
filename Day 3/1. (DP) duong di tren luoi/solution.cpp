#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<vector<int>> d(n+1,vector<int>(n+1,0));
	vector<vector<char>> a(n+1,vector<char>(n+1));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	d[1][1] = (a[1][1]=='.');
	#define MOD 1000000007
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) {
			if((i==1&&j==1)||a[i][j]=='*') continue;
			d[i][j] = (d[i-1][j]+d[i][j-1])%MOD;
		}
	cout<<d[n][n];
	return 0;
}
