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
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int start = 0, end = n - 1, ct = 0;
    while (start < end)
    {
        if (v[start] == v[end])
        {
            start++;
            end--;
        }
        else if (v[start] > v[end])
        {
            v[start] = v[start] - v[end];
            end--;
            ct++;
        }
        else
        {
            v[end] = v[end] - v[start];
            start++;
            ct++;
        }
    }
    cout << ct << endl;
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