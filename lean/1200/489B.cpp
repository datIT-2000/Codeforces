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
	int n, m, c1=0, c2=0, ans=0;
	cin >> n;
	vector<int> a,b;
	for(int i=0;i<n;++i){
		int x; cin >> x;
		a.pb(x);
	}
	cin >> m;
	for(int i=0;i<m;++i){
		int x; cin >> x;
		b.pb(x);
	}
	sort(all(a));
	sort(all(b));
	while(c1<n && c2<m){
		if(abs(a[c1]-b[c2])<=1){
			ans++; c1++; c2++;
		}
		else{
			if(a[c1]<b[c2])
				c1++;
			else c2++;
		}
	}
	cout << ans;
	return 0;
}


