#include <bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
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
ll f[10000001];
void soln()
{
    int n;
    cin >> n;
    ll s = 0, v;
    for (ll i = 0; i < n; i++)
    {
        cin >> v;
        s = (s + f[v]) % MOD;
    }
    cout << s << endl;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    f[0] = 1;
    for (ll i = 1; i < 10000001; i++)
    {
        f[i] = (f[i - 1] * i) % MOD;
    }
    while (t--)
    {
        soln();
    }
    return 0;
}