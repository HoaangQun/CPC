#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long a,b,res=0;
	cin>>a>>b;
	for(long long d=1;d*d<=a;d++) if(a%d==0) {
		long long d1 = d,d2 = a/d;
		if(b%(d1*3)==0) res+=d1;
		if((d2!=d1)&&b%(d2*3)==0) res+=d2;
	}
	cout<<res;
	return 0;
}
