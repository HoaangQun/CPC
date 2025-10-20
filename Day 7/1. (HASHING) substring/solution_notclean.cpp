#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define MAX 1000006

const int MOD = 5e6-1,base = 41;
string s,t;
int n;
ll H[MAX],P[MAX];

ll get_hash(const int& l, const int& r) {
	return ((H[r]-H[l-1]*P[r-l+1])%MOD+MOD)%MOD;
}
void solve() {
	int res = 0;
	P[0] = 1;
	FOR(i,1,n) {
		H[i] = (H[i-1]*base+s[i]-'a'+14)%MOD;
		P[i] = (P[i-1]*base)%MOD;
	}
	ll hT = 0;
	FOR(i,0,t.size()-1) hT = (hT*base+t[i]-'a'+14)%MOD;
	int m = t.size();
	for(int i=1;i+m-1<=n;i++) if(get_hash(i,i+m-1)==hT) res++;
	cout<<res;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>s>>t;
	n = s.size();
	s = ' '+s;
	return solve(),0;
}
