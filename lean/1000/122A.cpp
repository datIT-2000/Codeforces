#include <bits/stdc++.h>
#define ll int64_t
#define ff first
#define ss second
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
using namespace std;

constexpr int mod = 1e9+7;

bool ck(int i){
	while(i){
		if(i%10!=4 && i%10!=7)
			return false;
		i/=10;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin.exceptions(cin.failbit);
	srand(time(NULL));
	set<int> s;
	for(int i=1;i<=1000;++i){
		if(i%4==0 || i%7==0 || i%28==0){
			s.insert(i);
		}
		else if(ck(i))s.insert(i);
		else
			for(auto j:s){
				if(i%j==0)
				{
					s.insert(i);
					break;
				}
			}
	}
	int n;
	cin >> n;
	cout << (s.find(n)!=s.end()?"YES":"NO");
	return 0;
}


