#include <bits/stdc++.h>
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
using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;

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
	int n,m;
	cin >> n >> m;
	int a[n+2][m+2]{};
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(i==1 || i==n || j==1 || j==m)
				a[i][j]=1;
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(a[i][j]==1){
				// (i−1,j) , (i,j−1), (i+1,j), (i,j+1), (i−1,j−1), (i−1,j+1), (i+1,j−1), (i+1,j+1).
				a[i-1][j]=0; a[i][j-1]=0; a[i+1][j]=0; a[i][j+1]=0; a[i-1][j-1]=0; a[i-1][j+1]=0; a[i+1][j-1]=0; a[i+1][j+1]=0;
			}
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cout << a[i][j];
		}
		cout << '\n';
	}
	cout << '\n';
}

int main()
{
	setIO();
	srand(time(NULL));
	int t; re(t);
	while(t--)
		solution();
	return 0;
}




