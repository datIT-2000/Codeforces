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
	int n,l;
	cin >> n >> l;
	vector<int> a(n);
	for(auto &i:a) cin >> i;
	sort(all(a));
	double ans =0;
	ans = max({ans,abs(0-a[0])*1.0,(l-a[n-1])*1.0});
	for(int i=1;i<n;++i){
		ans=max(ans,(a[i]-a[i-1])*1.0/2);
	}
	cout << setp(9) << ans;
	return 0;
}


