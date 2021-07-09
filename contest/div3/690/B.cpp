#include <bits/stdc++.h>
#define ll int64_t
#define ff first
#define ss second
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define setp(x) fixed << setprecision(x)
using namespace std;

constexpr int mod = 1e9+7;

void sol(){
	int n;cin >> n;
	string s;
	cin >> s;
	if(s.substr(0,4) == "2020" || s.substr(n-4,4) == "2020"){
		cout << "YES\n";
		return ;
	}
	if((s.substr(0,3) == "202" && s[n-1]=='0') || (s.substr(n-3,3) == "020" && s[0]=='2') || (s.substr(0,2) == "20" && s.substr(n-2,2) == "20") ){
		cout << "YES\n";
	}
	else cout << "NO\n";
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



