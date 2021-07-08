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
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	cout << min({n*a, (n/m)*b+min((n%m)*a,b)});
	return 0;
}


