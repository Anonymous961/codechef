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

    ll y, x, s;
    cin >> x >> y;
    if (y > x)
    {
        if (!(y % 2))
        {
            s = ((y - 1) * (y - 1)) + x;
        }
        else
        {
            s = (y * y) - x + 1;
        }
    }
    else
    {
        if (!(x % 2))
        {
            s = (x * x) - y + 1;
        }
        else
        {
            s = (x - 1) * (x - 1) + y;
        }
    }
    cout << s << endl;
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