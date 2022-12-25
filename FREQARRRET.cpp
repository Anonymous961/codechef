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
#define vl vector<ll>
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
    ll b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    map<ll, pair<ll, ll>> mp;
    ll ct = 1;
    vl res;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(b[i]) == mp.end())
        {
            mp[b[i]] = {ct, b[i] - 1};
            if (mp[b[i]].second == 0)
                mp.erase(b[i]);
            res.pb(ct);
            ct++;
        }
        else
        {
            if (mp[b[i]].second > 0)
            {
                res.pb(mp[b[i]].first);
                mp[b[i]].second--;
            }
            if (mp[b[i]].second == 0)
                mp.erase(b[i]);
        }
    }
    for (auto i : mp)
    {
        if (i.second.second > 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
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