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
vector<ll> v;
void primeInRange(ll L, ll R)
{
    int flag;
    for (ll i = L; i <= R; i++)
    {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (ll j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            v.pb(i);
    }
}
int ans(ll x, ll y)
{
    if (x >= y)
    {
        return 0;
    }
    int factor = 2;
    for (auto &i : v)
    {
        if (x % i == 0)
        {
            factor = i;
            break;
        }
    }

    return ans(x + factor, y) + 1;
}
void soln()
{
    ll x, y;
    cin >> x >> y;
    ll c = 0;
    // while (x < y)
    // {
    //     // primeInRange(2, x / 2);
    //     int factor = 2;
    //     for (auto &i : v)
    //     {
    //         if (x % i == 0)
    //         {
    //             factor = i;
    //             break;
    //         }
    //     }
    //     x += factor;
    //     c++;
    // }
    // cout << c << endl;
    cout << ans(x, y) << endl;
}
void checker(ll n, ll div)
{
    if ((n - div) % 2 == 0)
        cout << (n - div) / 2 + 1 << endl;
    else
        cout << (n - div) / 2 + 2 << endl;
}

void sln()
{
    ll x, y;
    cin >> x >> y;
    if (x >= y)
        cout << 0 << endl;
    else if (x % 2 == 0)
        checker(y - x, 2);
    else if (x % 3 == 0)
        checker(y - x, 3);
    else if (x % 5 == 0)
        checker(y - x, 5);
    else if (x % 7 == 0)
        checker(y - x, 7);
    else
        checker(y - x, x);
}
int main()
{
    fastio();
    int t;
    cin >> t;
    primeInRange(0, 100);
    while (t--)
    {
        sln();
    }
    return 0;
}