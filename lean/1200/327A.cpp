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
	int n,ans=0; cin >> n;
	vector<int> a(n);
	for(auto &i:a) {cin >> i; ans+=i;}
	int res=0;
	for(int i=0;i<n;++i){
		for(int j=i;j<n;++j){
			int k1=0, k2=0;
			for(int t = i; t<=j;++t){
				if(a[t]==0)k1++;
				else k2++;
			}
			res=max(res,ans-k2+k1);
		}
	}
	cout << res;
	return 0;
}


