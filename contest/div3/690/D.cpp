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
    vector<ll> a(n);
    ll sum = 0;
    for(auto &i:a)
    {
        cin >> i;
        sum+=i;
    }
    for(int i=n; i>=1; --i)
    {
        if(sum%i==0)
        {
            ll sum_t = sum/i;
            ll s = 0;
            bool ok = true;
            for(int i=0; i<n; ++i)
            {
                s+=a[i];
                if(s>sum_t)
                {
                    ok = false;
                    break;
                }
                if(s==sum_t) s=0;
            }
            if(ok)
            {
                cout << n -i <<'\n';
                return ;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(cin.failbit);
    srand(time(NULL));
    int t;
    cin >> t;
    while(t--)
        sol();
    return 0;
}


