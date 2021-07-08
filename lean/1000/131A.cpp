#include <bits/stdc++.h>
#define ll int64_t
#define ff first
#define ss second
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
using namespace std;

constexpr int mod = 1e9+7;

bool ck(string s){
	for(int i=1;i<s.size();++i){
		if((s[i]>='a' && s[i]<='z')) return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin.exceptions(cin.failbit);
	srand(time(NULL));
	string s;
	cin >> s;
	if(ck(s)){
		for(auto &i:s){
			if(i>='a' && i<='z') i-=32;
			else i+=32;
		}
	}
	cout << s;
	return 0;
}


