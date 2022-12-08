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
    int n, q;
    cin >> n >> q;
    int arr[n + 10];
    int gc[n + 10];
    int rc[n + 10];
    gc[0] = rc[n + 1] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        gc[i] = __gcd(gc[i - 1], arr[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        rc[i] = __gcd(rc[i + 1], arr[i]);
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << __gcd(gc[l - 1], rc[r + 1]) << endl;
    }
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