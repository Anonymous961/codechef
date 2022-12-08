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
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    if (n == 4)
    {
        cout << 2 << " " << 4 << " " << 1 << " " << 3 << endl;
        return;
    }
    for (int i = 1; i <= n; i += 2)
    {
        if (i <= n)
        {
            cout << i << " ";
        }
    }
    for (int i = 2; i <= n; i += 2)
    {
        if (i <= n)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    fastio();
    // int t;
    // cin>>t;
    // while(t--){
    soln();
    // }
    return 0;
}