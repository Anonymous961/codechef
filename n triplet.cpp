#include <bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MAX 10000001
#define MOD1 998244353
#define INF 1e18
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
using namespace std;

void soln()
{
    ll n;
    cin >> n;
    vector<ll> f;
    for (ll i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                f.pb(i);
            else
            {
                f.pb(i);
                f.pb(n / i);
            }
        }
    }
    sort(f.begin(), f.end());
    if (f.size() < 3)
    {
        cout << -1 << endl;
        return;
    }
    ll a = f[0], b = f[1];
    ll c = (n / (a * b));
    for (ll i = 0; i < f.size(); i++)
    {
        if (f[i] == c)
        {
            cout << a << " " << b << " " << c << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        soln();
    }
    return 0;
}