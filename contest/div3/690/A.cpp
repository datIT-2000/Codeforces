#include <bits/stdc++.h>
#define ll int64_t
#define ff first
#define ss second
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define setp(x) fixed << setprecision(x)
using namespace std;

constexpr int mod = 1e9+7;

void sol()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &i:a) cin >> i;
	for(int i=0, j=n-1; i<=j ; i++, j-- ){
		if(i==j){
			cout << a[i] << '\n';
			return ;
		}
		cout << a[i] << ' ' << a[j] << ' ';
	}
	cout << '\n';
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin.exceptions(cin.failbit);
	srand(time(NULL));
	int t;
	cin >> t;
	while(t--)
		sol();
	return 0;
}



