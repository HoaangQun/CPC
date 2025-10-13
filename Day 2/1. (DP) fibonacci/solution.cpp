#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<unsigned long long> f(93,1);
	for(int i=2;i<=92;i++) f[i] = f[i-1]+f[i-2];
	int t;
	cin>>t;
	while(t--) {
		int x; cin>>x;
		cout<<f[x]<<'\n';
	}
	return 0;
}
