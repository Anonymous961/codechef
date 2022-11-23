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

void soln()
{
    ll n;
    cin >> n;
    cout << n << " ";
    cout << n - 2 << " ";
    for (int i = 1; i < n - 2; i++)
    {
        cout << i << " ";
    }
    cout << n - 1 << endl;
    // ll arr[n];
    // ll x = n;
    // for (ll i = 0; i < n; i++)
    // {
    //     if (i < (n + 1) / 2)
    //     {
    //         arr[i] = x;
    //         x -= 2;
    //     }
    //     else
    //     {
    //         if (n % 2)
    //         {
    //             x = 2;
    //             for (ll i = (n / 2) + 1; i < n; i++)
    //             {
    //                 arr[i] = x;
    //                 x += 2;
    //             }
    //         }
    //         else
    //         {
    //             x = 1;
    //             for (ll i = (n / 2); i < n; i++)
    //             {
    //                 arr[i] = x;
    //                 x += 2;
    //             }
    //         }
    //     }
    // }
    // for (ll i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";
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