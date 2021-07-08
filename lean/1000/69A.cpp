#include <bits/stdc++.h>
#define ll int64_t
#define ff first
#define ss second
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
using namespace std;

constexpr int mod = 1e9+7;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin.exceptions(cin.failbit);
	srand(time(NULL));
	int n,a=0,b=0,c=0; cin >> n;
	for(int i=0;i<n;++i)
	{
		int x,y,z;
		cin >> x >> y >> z;
		a+=x; b+=y; c+=z;
	}
	cout << (a==0 && b==0 && c==0?"YES":"NO");
	return 0;
}


