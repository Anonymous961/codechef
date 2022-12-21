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
    int n, w, c, p, t;
    cin >> n >> w;
    multimap<int, int> mm;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> p >> t;
        mm.insert({t, c * p});
    }
    // for (auto i : mm)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    multimap<int, int>::iterator it = mm.begin();
    int points[n];
    int x = (*it).first;
    int i = 0;
    for (auto pt : mm)
    {
        if (x == pt.first)
        {
            points[i] = pt.second;
            i++;
        }
    }
    int ans = 0;
    for (int y = i; y >= 0; y--)
    {
        if (w - x >= 0)
        {
            ans += points[y];
            w -= x;
        }
    }
    cout << ans << endl;
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