#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,S;
	cin>>n>>S;
	int l = n/2;
	long long a[l],b[n-l];
	for(int i=0;i<l;i++)	cin>>a[i];
	for(int i=0;i<n-l;i++)	cin>>b[i];
	vector<long long> s[2];
	for(int mask=0;mask<(1<<l);mask++) {
		long long sum = 0;
		for(int j=0;j<l;j++) if((mask>>j)&1) sum+=a[j];
		if(sum<=S) s[0].push_back(sum);
	}
	for(int mask=0;mask<(1<<(n-l));mask++) {
		long long sum = 0;
		for(int j=0;j<(n-l);j++) if((mask>>j)&1) sum+=b[j];
		if(sum<=S) s[1].push_back(sum);
	}
	sort(s[0].begin(),s[0].end());
	sort(s[1].begin(),s[1].end());
	long long res = 0;
	for(const long long& x:s[0]) {
		res+= 1LL*(upper_bound(s[1].begin(),s[1].end(),S-x)-lower_bound(s[1].begin(),s[1].end(),S-x));
	}
	cout<<res;
	return 0;
}
