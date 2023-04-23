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
    // int f = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1] && (i != n - 1))
        {
            c++;
            // cout << c << endl;
        }
        else
        {
            // cout << "check";

            if (c >= 2)
            {
                s.erase(i - c, c);
                n -= c;
                i = i - c;
                c = 0;
            }
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