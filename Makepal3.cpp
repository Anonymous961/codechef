#include <bits/stdc++.h>
typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MAX 100001
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
int arr[MAX];
int b[MAX];

void soln()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[n - 1 - i])
        {
            b[i] = arr[n - 1 - i] - arr[i];
        }
    }
    ll ans = b[0];
    for (int i = 1; i < n; i++)
    {
        ans += max(0, (b[i] - b[i - 1]));
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
