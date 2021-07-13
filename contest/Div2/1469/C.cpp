#include <bits/stdc++.h>
#define ll uint64_t
#define ff first
#define ss second
#define sz(x) x.size()
#define pb(x) push_back(x)
#define all(a) a.begin(),a.end()
#define setp(x) fixed << setprecision(x)

using namespace std;

typedef complex<long double> cd;
namespace input {
	template<class T> void re(complex<T>& x);
	template<class T1, class T2> void re(pair<T1,T2>& p);
	template<class T> void re(vector<T>& a);
	template<class T, size_t SZ> void re(array<T,SZ>& a);

	template<class T> void re(T& x) { cin >> x; }
	void re(double& x) { string t; re(t); x = stod(t); }
	void re(long double& x) { string t; re(t); x = stold(t); }
	template<class Arg, class... Args> void re(Arg& first, Args&... rest) {
		re(first); re(rest...);
	}

	template<class T> void re(complex<T>& x) { T a,b; re(a,b); x = cd(a,b); }
	template<class T1, class T2> void re(pair<T1,T2>& p) { re(p.ff,p.ss); }
	template<class T> void re(vector<T>& a) {
		for(auto &i:a)re(i);
	}
	template<class T, size_t SZ> void re(array<T,SZ>& a) {
		for(int i=0;i<SZ;++i) re(a[i]);
	}
}

using namespace input;

namespace io
{
	void setIn(string s) { ifstream cin (s);}
	void setOut(string s) {ofstream cout (s);}
	void setIO(string s = "")
	{
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin.exceptions(cin.failbit);
		if (sz(s)) setIn(s+".inp"), setOut(s+".out");
	}
}
using namespace io;

constexpr int mod = 1e9+7;

void solution()
{
	ll n,k,x;
	re(n);
	re(k);
	x = k-1;
	vector<ll> a(n);
	for(ll &i:a) re(i);
	int mn[n]{}, mx[n]{};
	mn[0]=a[0];
	mx[0]=a[0]+k;
	for(int i=1;i<n-1;++i){
		if(a[i]>=mx[i-1] || a[i]+x+k<=a[i-1]){
			cout << "NO\n";
			return;
		}
		mx[i] = a[i]+x+k;
	}
	if(a[n-1]+k<=a[n-2] || a[n-1]>= mx[n-2]) cout<<"NO\n";
	else cout << "YES\n";
}

int main()
{
	setIO();
	srand(time(NULL));
	int t;
	re(t);
	while(t--)
		solution();
	return 0;
}



