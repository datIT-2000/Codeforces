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
	int n,x;
	cin >> n;
	if(n<10) {
		cout << n << '\n';
		return ;
	}
	x = 9;
	string res="";
	while(n){
		if(n<=x){
			res+=char(n+'0');
			break;
		}
		if(x<=0){
			cout << "-1\n";
			return;
		}
		res+=char(x+'0');
		n-=x;
		x-=1;
	}
	reverse(all(res));
	cout << res << '\n';
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



