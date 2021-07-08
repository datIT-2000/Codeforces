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
	string s,res="";
	cin >> s;
	for(auto &i:s){
		if(i>='A' && i<='Z')
			i+=32;
		if(i!='a' && i!='o' && i!='y' && i!='e' && i!='u' && i!='i')
		{
			cout << "." << i;
		}
	}
	return 0;
}


