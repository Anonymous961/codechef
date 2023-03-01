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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = n * 2;
    int ones = 0, zero = 0;
    vi o;
    vi z;
    for (int i = 0; i < n * 2; i++)
    {
        if (s[i] == '1')
        {
            ones++;
            o.pb(i + 1);
        }
        else
        {
            zero++;
            z.pb(i + 1);
        }
    }
    if (ones == 0 || zero == 0)
    {
        cout << -1 << endl;
        return;
    }
    if (o.size() == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << o[i] << " ";
        }
    }
    else
    {
        if (o.size() > z.size())
        {
            for (int i = 0; i < n; i++)
            {
                cout << o[i] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << z[i] << " ";
            }
        }
    }
    cout << endl;
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