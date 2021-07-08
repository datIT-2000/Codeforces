#include <bits/stdc++.h>
#define ll int64_t
#define ff first
#define ss second
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define setp(x) fixed << setprecision(x)
using namespace std;

constexpr int mod = 1e9+7;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin.exceptions(cin.failbit);
	srand(time(NULL));
	int n;
	cin >> n;
	vector<ll> a(n+1,0);
	for(int i=1;i<=n;++i){
		ll x; cin >> x;
		a[i]=a[i-1]+x;
	}
	int m;
	cin >> m;
	while(m--){
		ll x; cin >> x;
		int l=1, r=n;
		while(l<=r){
			int m = (l+r)>>1;
			if(a[m]<=x){
				l=m+1;
			}
			else r=m-1;
		}
		cout << (a[l-1]==x?l-1:l) << '\n';
	}
	return 0;
}


