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
    string s;
    int r = 0, g = 0;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'R')
        {
            r++;
        }
        else if (s[i] == 'G' && s[i + 1] == 'G')
        {
            g++;
        }
    }
    if (s[0] == 'R' && s[s.size() - 1] == 'R')
    {
        r++;
    }
    else if (s[0] == 'G' && s[s.size() - 1] == 'G')
    {
        g++;
    }
    if ((r == 1 && g == 1) || (r == 0 && g == 0))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
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